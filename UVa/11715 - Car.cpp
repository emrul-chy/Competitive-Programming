#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=1;
    double u, v, s, t, a;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        if(n == 1)
        {
            cin >> u >> v >> t;
            a = ((v - u) / t);
            s = u * t + .5 * (a * t * t);
            printf("Case %d: %.3lf %.3lf\n", i, s, a);
        }
        else if(n == 2)
        {
            cin >> u >> v >> a;
            t = abs(v - u) / abs(a);
            s = u * t + .5 * (a * t * t);
            printf("Case %d: %.3lf %.3lf\n", i, s, t);
        }
        else if(n == 3)
        {
            cin >> u >> a >> s;
            v = abs(sqrt(u * u + 2 * a * s));
            t = (v - u ) / abs(a);
            printf("Case %d: %.3lf %.3lf\n", i, v, t);
        }
        else if(n == 4)
        {
            cin >> v >> a >> s;
            u = abs(sqrt(v * v - 2 * a * s));
            t = abs(v - u ) / abs(a);
            printf("Case %d: %.3lf %.3lf\n", i, u, t);
        }
        i++;
    }
    return 0;
}
