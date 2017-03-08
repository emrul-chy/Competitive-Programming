#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string solve(LL n, LL b)
{
    string s;
    LL l;
    while(n != 0)
    {
        s += ((n % b) + '0');
        n /= b;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string s, m;
    LL x, y, i, b;
    while(cin >> b, b)
    {
        cin >> s >> m;
        y = 0;
        for(i=0; i<m.size(); i++)
        {
            y = y*b + (m[i]-'0');
        }
        x = 0;
        for(i=0; i<s.size(); i++)
        {
            x = (x * b + (s[i]-'0')) % y;
        }
        s = solve(x, b);
        cout << ((!s.size())?  "0" : s) << endl;
    }
    return 0;
}
