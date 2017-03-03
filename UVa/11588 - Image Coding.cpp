#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, mx, r, i, c, s, fq[200];
    char ch;
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        memset(fq, 0, sizeof fq);
        s = mx = 0;
        cin >> r >> c >> m >> n;
        for(i=1; i<= r*c; i++)
        {
            cin >> ch;
            fq[ch]++;
            mx = max(mx, fq[ch]);
        }
        for(i='A'; i<='Z'; i++)
        {
            if(fq[i] == mx)
            {
                s += (m * fq[i]);
            }
            else
            {
                s += (n * fq[i]);
            }
        }
        printf("Case %d: %d\n", tc, s);
    }
    return 0;
}
