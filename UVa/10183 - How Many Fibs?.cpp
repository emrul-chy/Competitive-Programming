#include <bits/stdc++.h>
using namespace std;

vector <string> v, fib[110];

int cmp(string a, string b)
{
    int i, l = a.size();

    if(a.size() > b.size())
    {
        return 1;
    }
    if(a.size() < b.size())
    {
        return -1;
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(a[i] > b[i])
                return 1;
            if(b[i] > a[i])
                return -1;
        }
        return 0;
    }
}

void fib_gen()
{
    int i, j;
    
    v.push_back("1");
    v.push_back("2");
    
    fib[1].push_back("1");
    fib[1].push_back("2");
    
    string s="", s1="", s2="";
    
    for(i=2; i<=500; i++)
    {
        string k = v[i-1];
        reverse(k.begin(), k.end());
        s1 = k;

        k = v[i-2];
        reverse(k.begin(), k.end());
        s2 = k;

        int x=s1.size(), y = s2.size();

        for(j=y; j<x; j++)
        {
            s2 += "0";
        }

        int sum = 0, c = 0;

        for(j=0; j<x; j++)
        {
            sum = (s1[j]-'0') + (s2[j] - '0') + c;
            s += ( sum % 10 + 48);
            c = sum / 10;
        }

        if(c > 0)
        {
            s += (c + 48);
        }

        reverse(s.begin(), s.end());
        
        v.push_back(s);
        fib[s.size()].push_back(s);
        
        if(s.size() > 104)
        {
            return;
        }
        s="", s1="", s2="";
    }
}

int main()
{
    fib_gen();
    int i, j, cnt;
    string a, b;
    while(cin >> a >> b)
    {
        if(a == "0" && b == "0")
            break;
        cnt = 0;
        for(i=a.size(); i<=b.size(); i++)
        {
            for(j=0; j<fib[i].size(); j++)
            {
                if(cmp(fib[i][j], a) != -1 && cmp(b, fib[i][j]) != -1)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
