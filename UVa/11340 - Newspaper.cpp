#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, q, m, j;
    char c, w;
    double tk, s;
    cin >> t;
    for(i=0; i<t; i++)
    {
        double a[256] = {0};
        cin >> q;
        for(j = 0; j<q; j++)
        {
            getchar();
            scanf("%c", &w);
            cin >> tk;
            a[w] = tk;
        }
        cin >> m;
        s =0.0;
        getchar();
        for(j=0; j<m; j++)
        {
            while(1)
            {
                scanf("%c", &c);
                if(c=='\n')
                {
                    break;
                }
                else
                {
                    s += a[c];
                }
            }
        }
        double ans = s / 100.0;
        printf("%0.2lf%c\n", ans,'$');
    }
    return 0;
}
