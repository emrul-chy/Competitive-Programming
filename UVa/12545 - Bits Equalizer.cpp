#include <bits/stdc++.h>
using namespace std;

int solve(string s1, string s2)
{
    int i, c = 0, diff = 0, c1 = 0, c0 = 0;

    for (i = 0; i < s1.size(); ++i)
    {
        if (s1[i] != s2[i])
        {
            c++;
        }
        if (s1[i] == '?' && s2[i] == '1')
        {
            diff--;
        }
        else if (s1[i] == '0' && s2[i] == '1')
        {
            c0++;
            diff--;
        }
        else if (s1[i] == '1' && s2[i] == '0')
        {
            c1++;
            diff++;
        }
    }

    if (diff > 0)
        return -1;

    return c - min(c1, c0);
}

int main()
{
    string s1, s2;
    int T, i, j=1, ans, c, c1, c0;
    cin >> T;
    while(T--)
    {
        cin >> s1;
        cin >> s2;
        printf("Case %d: %d\n", j++, solve(s1, s2));
    }
    return 0;
}
