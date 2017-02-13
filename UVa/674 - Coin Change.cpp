#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int coins[] = {50, 25, 10, 5, 1};

int dp[10001][5];

int rec(int n, int s)
{
    int c = 0, i;

    if(n == 0)
        return 1;

    if(dp[n][s] != -1)
        return dp[n][s];

    for(i=s; i<5; i++)
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
    int n;
    memset(dp, -1, sizeof dp);

    while(scanf("%d", &n) == 1)
    {
        printf("%d\n", rec(n, 0));
    }
    return 0;
}
