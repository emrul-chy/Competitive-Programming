#include<bits/stdc++.h>
using namespace std;

#define mod 1000000

int dp[105][105];

int main()
{
    int i, j, n, k;
    for(i=1; i<=100; i++)
    {
        dp[i][1] = 1; dp[i][i] = 1;
        dp[1][i] = i;
    }
    for(i=2; i<=100; i++)
    {
        for(j=2; j<=100; j++)
        {
            dp[i][j] = ((dp[i-1][j] % mod) + (dp[i][j-1] % mod)) % mod;
        }
    }
    while(scanf("%d %d", &n, &k), n, k)
    {
        printf("%d\n", dp[n][k]);
    }
    return 0;
}
