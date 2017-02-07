#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[505], ans, m, n, s, j, i, mx;
    while(scanf("%d %d", &n, &m)==2)
    {
        mx=0;
        memset(a, 0, sizeof a);
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d", &s);
                a[j] += s;
                if(a[j] >= mx)
                {
                    ans = j;
                    mx = a[j];
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
