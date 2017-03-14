#include <bits/stdc++.h>
using namespace std;

int dp[10000007];

int solve()
{
    dp[1] = 1;
    double sum = 0;
    for (int i=2; i<=10000000; i++)
    {
        sum += log10(i);
        dp[i] = floor(sum) + 1;
    }
}

int main()
{
    int T, n;
    //solve();
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        printf((n == 1) ? "1\n" : "%d\n", (int)ceil((0.5*log(2*acos(-1.0)*n) + n*log(n)-n) /log(10)));
    }
    return 0;
}
