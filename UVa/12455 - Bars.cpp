#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, x, n, p, i, j, dp[1050];
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &x);
        scanf("%lld", &n);
        memset(dp, 0, sizeof dp);
        for(i=0; i<n; i++)
        {
            scanf("%lld", &p);
            for(j=x-p; j>=0; j--)
            {
                if(dp[j] != dp[j+p])
                {
                    dp[j+p] = 1;
                }
            }
        }
        if(dp[x])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
