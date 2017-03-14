#include <bits/stdc++.h>
using namespace std;

double dp[1000005];
double ans[1000005];

int main()
{
    int n, i, j=1;

    double x, y, s, N;
    x = 3;
    dp[1] = 1;

    for(i=2; i<=1000000; i++)
    {
        dp[i] = dp[i-1] + x*x;
        x = x + 2;
        n = i;
        N = n;
        y = dp[n] + (N * N * n) - (2 * N * N * n) ;
        s = y / (n-1);
        ans[i] = sqrt(s);
    }

    while(scanf("%d", &n), n)
    {
        printf("%.6lf\n", ans[n]);
    }
    return 0;
}
