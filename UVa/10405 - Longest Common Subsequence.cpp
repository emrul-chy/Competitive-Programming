#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

string s1, s2;

int lcs(int i, int j)
{
    if(s1[i-1] == s2[j-1])
    {
        return dp[i-1][j-1]+1;
    }
    else
    {
        if(dp[i-1][j] == dp[i][j-1])
        {
            return dp[i][j-1];
        }
        return max(dp[i-1][j], dp[i][j-1]);
    }
}

int main()
{
    while(getline(cin, s1))
    {
        getline(cin, s2);
        
        memset(dp, 0, sizeof dp);
        
        int i, j, n, m;
        n = s1.size();
        m = s2.size();
        
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                dp[i][j] = lcs(i, j);
            }
        }
        
        printf("%d\n", dp[n][m]);
    }
    return 0;
}
