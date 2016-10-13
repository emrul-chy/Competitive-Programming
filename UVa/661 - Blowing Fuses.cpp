#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ar[200000], x[200000], i, s, j = 1, mx, f, m, c, t;

    while(cin >> n >> m >> c && n >0 && m >0 && c >> 0)
    {
        memset(x, 0, sizeof(x));
        f = 0, mx = 0, s = 0;
        for(i=1; i<=n; i++)
        {
            cin >> ar[i];
        }
        for(i=0; i<m; i++)
        {
            cin >> t;
            x[t]++;
            if(x[t] % 2 == 1)
            {
                s += ar[t];
                if(s > c)
                {
                    f = 1;
                }
                if(s > mx)
                {
                    mx = s;
                }
            }
            if(x[t] % 2 == 0)
            {
                s -= ar[t];
            }
        }
        printf("Sequence %d\n", j);
        if(f == 1)
        {
            printf("Fuse was blown.\n");
        }
        else if(f == 0)
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", mx);
        }
        printf("\n");
        j++;
    }
    return 0;
}
