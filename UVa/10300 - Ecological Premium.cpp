#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, n, p, j, x, ans, i;
    cin >> t;
    for(i=0; i<t; i++)
    {
        ans = 0;
        cin >> x;
        for (j = 0; j < x; j++)
        {
            cin >> a >> n >> p;
            ans += a * p;
        }
        printf("%d\n", ans);
    }
    return 0;
}
