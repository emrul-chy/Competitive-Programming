#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL coins[22];

void init()
{
    for(LL i=0; i<21; i++)
    {
        coins[i] = ((i+1)*(i+1)*(i+1));
    }
}

LL dp[10010][22];

LL rec(LL n, LL s)
{
    LL c = 0, i;

    if(n == 0)
        return 1;

    if(dp[n][s] != -1)
        return dp[n][s];

    for(i=s; i<21; i++)
    {
        if(n >= coins[i])
        {
            c += rec(n - coins[i], i);
        }
    }
    return dp[n][s] = c;
}

int main()
{
    init();
    LL n;
    memset(dp, -1, sizeof dp);

    while(scanf("%lld", &n) == 1)
    {
        printf("%lld\n", rec(n, 0));
    }
    return 0;
}
