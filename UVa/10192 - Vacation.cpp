#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
string a, b;

int lcs(int i, int j)
{
    if(a[i-1] == b[j-1])
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
    int T = 1;
    while(getline(cin, a) && a != "#")
    {
        int i, j, x, y;
        getline(cin, b);
        x = a.size();
        y = b.size();
        memset(dp, 0, sizeof dp);
        for(i=1; i<=x; i++)
        {
            for(j=1; j<=y; j++)
            {
                dp[i][j] = lcs(i, j);
            }
        }
        printf("Case #%d: you can visit at most %d cities.\n", T++, dp[x][y]);
    }
    return 0;
}
