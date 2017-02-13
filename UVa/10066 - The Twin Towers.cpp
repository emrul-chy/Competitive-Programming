#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];

int ar1[105], ar2[105];

int lcs(int i, int j)
{
    if(ar1[i-1] == ar2[j-1])
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
    int T, tc = 1, i, j, n1, n2;
    while(cin >> n1 >> n2)
    {
        if(n1 == 0 && n2 == 0)
        {
            break;
        }

        memset(dp, 0, sizeof dp);

        for(i=0; i<n1; i++)
        {
            cin >> ar1[i];
        }

        for(i=0; i<n2; i++)
        {
            cin >> ar2[i];
        }

        for(i=1; i<=n1; i++)
        {
            for(j=1; j<=n2; j++)
            {
                dp[i][j] = lcs(i, j);
            }
        }

        printf("Twin Towers #%d\n", tc++);
        printf("Number of Tiles : %d\n\n", dp[n1][n2]);
    }
    return 0;
}
