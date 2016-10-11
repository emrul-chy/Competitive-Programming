raihanruhin#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n;
    double d, v, u, f, s_v, cos, s;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        f=0, s_v=0, s=0, cos=0;
        cin >> d >> v >> u;
        cos = -(v/u);
        s_v= u * sqrt(1-(cos*cos));
        f = d / u;
        s = d / s_v;
        printf("Case %d: ", i);
        if(v != u)
        {
            if(f > s)
            {
                printf("%.3lf\n", f-s);
            }
            else if(s > f)
            {
                printf("%.3lf\n", s-f);
            }
            else
            {
                printf("can't determine\n");
            }
        }
        else
        {
            printf("can't determine\n");
        }
    }
    return 0;
}
