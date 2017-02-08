#include <bits/stdc++.h>
using namespace std;

int dp[5005];

void gen()
{
    int j, i, c=0, flg, fq[10];
    string s;
    for(i=1; i<=5000; i++)
    {
        flg = 1;
        memset(fq, 0, sizeof fq);
        stringstream ss;
        ss << i;
        s = ss.str();
        for(j=0; j<s.size(); j++)
        {
            fq[s[j] - '0']++;
            if(fq[ s[j] - '0' ] > 1)
            {
                flg = 0;
                break;
            }
        }
        if(flg)
        {
            c++;
        }
        dp[i] = c;
    }
}

int main()
{
    int n, m, j, i, flg, c=0, fq[10];
    gen();
    while(scanf("%d %d", &n, &m)==2)
    {
        printf("%d\n", dp[m]-dp[n-1]);
    }
    return 0;
}
