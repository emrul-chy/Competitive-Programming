#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string strdiv(string s, LL n)
{
    LL i, flg = 0, sum = 0, t;
    string ans;
    for(i=0; i<s.size(); i++)
    {
        sum = sum * 10 + (s[i]-'0');
        t = sum / n;
        if(!t && !flg)
        {
            continue;
        }
        else
        {
            ans += (t + '0');
            flg = 1;
            sum = (sum % n);
        }
    }
    if(!flg)
        ans = "0";
    return ans;
}

string stradd(string s1, string s2)
{
    int i;
    string a;
    if(s2.size() < s1.size())
    {
        swap(s1, s2);
    }
    int flg = 0;

    int j, s=0, c=0, l=s1.size(), ll = s2.size();

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(j=l; j<ll; j++)
    {
        s1 += "0";
    }
    for(j=0; j<ll; j++)
    {
        s = (s1[j]-'0') + (s2[j] - '0')+c;
        c = s / 10;
        a += (s % 10) + '0';
    }

    if(c > 0)
    {
        a += c % 10 + '0';
    }

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    string s, ans, x;
    LL n, t, j=1;
    while(cin >> n >> t)
    {
        if(!n && !t)
            break;
        x = "0";
        while(n--)
        {
            cin >> s;
            x = stradd(s, x);
        }
        ans = strdiv(x, t);
        printf("Bill #%lld costs %s: each friend should pay %s\n\n", j++, x.c_str(), ans.c_str());
    }
    return 0;
}
