#include <bits/stdc++.h>
using namespace std;

int main()
{
    int coin[5] = {1, 10, 100, 1000, 10000};
    int ar[100][100], n, m, mx, ind, x, tmp, ans, sum[100], b[100], i, j;
    while(scanf("%d %d", &n, &m)==2)
    {
        ans = 0;
        for(i=0; i<m; i++)
        {
            scanf("%d" , &b[i]);
            sum[i] = 0;
            for(j=0; j<n; j++)
            {
                scanf("%d", &ar[i][j]);
                sum[i] += ar[i][j];
            }
            ans += (sum[i] <= b[i]) ? ar[i][0] : 0;
        }
        x = 0;
        for(i=0; i<m; i++)
        {
            ind = -1, mx = 0;
            for(j=0; j<5; j++)
            {
                tmp = sum[i] - ar[i][0];
                tmp += coin[j];
                if(tmp <= b[i])
                {
                    ind = j;
                    mx = tmp;
                }
            }
            x += (ind != -1) ? coin[ind] : 0;
        }
        printf("%d\n", (x-ans>0) ? x-ans : 0);
    }
    return 0;
}
