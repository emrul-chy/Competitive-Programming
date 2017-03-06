#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
string a[10001], b[10001];

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
    string s, st;
    while(getline(cin, s))
    {
        int flg = 0, i, j, l, x = 0, y=0, cnt = 0;
        l = s.size();
        flg = ( !l ) ? 1 : 0;
        for(i=0; i<l; i++)
        {
            st = "";
            while(isdigit(s[i]) || isalpha(s[i]))
            {
                st += s[i];
                i++;
            }
            if( st.size() )
            {
                a[x++] = st;
            }
        }
        getline(cin, s);
        l = s.size();
        y = 0;
        flg = ( !l ) ? 1 : flg;
        for(i=0; i<l; i++)
        {
            st = "";
            while(isdigit(s[i]) || isalpha(s[i]))
            {
                st += s[i];
                i++;
            }
            if( st.size() )
            {
                b[y++] = st;
            }
        }
        memset(dp, 0, sizeof dp);
        for(i=1; i<=x; i++)
        {
            for(j=1; j<=y; j++)
            {
                dp[i][j] = lcs(i, j);
            }
        }
        cnt = dp[x][y];
        printf("%2d. ", T++);
        printf(( flg ) ? "Blank!\n" : "Length of longest match: %d\n", cnt);

    }
    return 0;
}
