#include <bits/stdc++.h>
using namespace std;

vector <string> v;

void fib()
{
    int i, j;
    v.push_back("0");
    v.push_back("1");
    string s="", s1="", s2="";
    for(i=2; ; i++)
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

        int ss =0,c=0;

        for(j=0; j<x; j++)
        {
            ss = (s1[j]-'0') + (s2[j] - '0');
            ss += c;
            s += ( ss % 10 + 48);
            c = ss / 10;
        }

        if(c > 0)
        {
            s += (c + 48);
            j++;
        }

        reverse(s.begin(), s.end());
        v.push_back(s);
        if(s.size() > 1000) break;
        s="", s1="", s2="";
    }
}

int main()
{
    fib(); 
    int n;
    while(cin >> n)
    {
        cout << v[n] << endl;
    }
    return 0;
}
