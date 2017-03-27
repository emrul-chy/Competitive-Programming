#include <bits/stdc++.h>
using namespace std;

string v[2005];

string strmul(string s1, string s2)
{
    string m;

    int i, l, j, c, s=0;

    reverse(s1.begin(), s1.end());

    l = s1.size();

    m = "";
    c = 0;

    for(j=0; j<l; j++)
    {
        s = (s1[j]-'0') * (3) + c;
        c = s / 10;
        m += (s % 10) + '0';
    }

    if(c > 0)
    {
        m += c % 10 + '0';
    }

    reverse(s1.begin(), s1.end());
    return m;
}

string strsub(string x, string y)
{
    string a;

    int i, j, flag=0, l, ll;

    l = x.size(), ll = y.size();

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    for(i=ll; i<l; i++)
    {
        y += "0";
    }

    for(i=0; i<l; i++)
    {
        if(x[i] < y[i])
        {
            j = i+1;
            while(x[j] == '0' && j < l)
            {
                x[j] = '9';
                j++;
            }
            x[j]--;
            x[i] += 10;
        }
        a += (x[i] - y[i]) % 10 + '0';
    }

    reverse(a.begin(), a.end());
    return a;
}

void fib()
{
    int i, j;

    v[0] = "0";
    v[1] = "1";
    v[2] = "3";
    string s="", s1="", s2="";
    for(i=3; i<=2002; i++)
    {
        string k = strmul(v[i-1], "3");
        reverse(k.begin(), k.end());
        s1 = k;
        k = v[i-2];
        s2 = k;
        s = strsub(s1, s2);
        v[i] = s;
        s="", s1="", s2="";
    }
}

int main()
{
    fib();
    int n;
    while(scanf("%d", &n), n)
    {
        printf("%s\n", v[n].c_str());
    }
    return 0;
}
