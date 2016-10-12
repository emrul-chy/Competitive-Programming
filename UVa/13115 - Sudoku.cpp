#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k, s, m, x, c, a, b, ar[30][30], f;
    cin >> t;
    for(int q=1; q<=t; q++)
    {
        cin >> n;
        f = 0;
        x = (n * (n + 1)) / 2;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin >> ar[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            s =0;

            for(j=1; j<=n; j++)
            {
                s += ar[j][i];
            }

            if(s != x)
            {
                f = 1;
                break;
            }
        }

        for(i=1; i<=n; i++)
        {
            s =0;

            for(j=1; j<=n; j++)
            {
                s += ar[i][j];
            }

            if(s != x)
            {
                f = 1;
                break;
            }
        }
        a = (int)sqrt(n);
        j = 1; i =1;
        while(f == 0)
        {
            s = 0;

            for(k=i; k<i+a; k++)
            {
                for(m=j; m<j+a; m++)
                {
                    s += ar[k][m];
                }
            }

            if(s != x)
            {
                f = 1;
                break;
            }
            j += a;

            if(j > n)
            {
                i += a;
                if(i > n)
                {
                    break;
                }
                j = 1;
            }

        }

        if(f == 0)
        {
            printf("yes\n");
        }

        else
        {
            printf("no\n");
        }
    }
    return 0;
}
