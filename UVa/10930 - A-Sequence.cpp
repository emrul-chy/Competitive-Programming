#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T=1, x, n, ar[50], p, i, flg, j, dp[30050];
    while(scanf("%lld", &n) == 1)
    {
        flg = 0;
        LL sum  = 0;
        memset(dp, 0, sizeof dp);
        for(i=0; i<n; i++)
        {
            scanf("%lld", &ar[i]);
            p = ar[i];
            if(i > 0)
            {
                if(ar[i] <= ar[i-1])
                {
                    flg = 1;
                }
            }
            if(dp[p])
            {
                flg = 1;
            }
            for(j=p; j>=0; j--)
            {
                if(dp[j] != dp[j+p])
                {
                    dp[j+p] = 1;
                }
            }
            dp[p] = 1;
        }
        printf("Case #%lld:", T++);
        for(i=0; i<n; i++)
        {
            printf(" %lld", ar[i]);
        }
        printf("\nThis is ");
        printf((flg) ? "not " : "");
        printf("an A-sequence.\n");
    }
    return 0;
}
