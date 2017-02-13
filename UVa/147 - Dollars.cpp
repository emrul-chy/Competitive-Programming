#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};

LL dp[1000001][5];

LL rec(LL n, LL s)
{
    LL c = 0, i;

    if(n == 0)
        return 1;

    if(dp[n][s] != -1)
        return dp[n][s];

    for(i=s; i<11; i++)
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
    double n;
    LL x;
    memset(dp, -1, sizeof dp);

    while(scanf("%lf", &n) == 1 && n > 0.0000000001)
    {
        x = round(n * 100);
        printf("%6.2lf%17lld\n", n, rec(x, 0));
    }
    return 0;
}
