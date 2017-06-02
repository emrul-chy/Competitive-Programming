// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define MX 1000005
using namespace std;

double dp[MX];
int ans[MX];
int T;
int n, s, a, d;

double calc(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return a+s+d;

    if(ans[n] == T)
        return dp[n];

    ans[n] = T;

    return dp[n] = (n & 1) ? 0.5 * (calc(n+1) + a + calc(n-1) + s) : calc(n/2) + d;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        T++;
        scanf("%d %d %d %d", &n, &d, &s, &a);
        printf("%.3f\n", calc(n));
    }
    return 0;
}
