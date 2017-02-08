#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m, i, flg, j, c;
    ll ar[105][105];
    while(scanf("%lld %lld", &n, &m)==2)
    {
        c = 0;
        for(i=1; i<=n; i++)
        {
            flg = 0;
            for(j=1; j<=m; j++)
            {
                scanf("%lld", &ar[i][j]);
                if(ar[i][j] == 0)
                {
                    flg = 1;
                }
            }
            if(!flg)
            {
                c++;
            }
        }
        printf("%lld\n", c++);
    }
    return 0;
}
