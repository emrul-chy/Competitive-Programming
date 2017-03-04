#include <bits/stdc++.h>
using namespace std;

int dp[10005];

void solve()
{
    int i, j;
    for(i=1; i<=10000; i++)
    {
        dp[i] = i;
        for(j=2; j*j<=i; j++)
        {
            dp[i] = (dp[i] > dp[i-j*j]+1) ? dp[i-j*j]+1 : dp[i];
        }
    }
}

int main()
{
    solve();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
