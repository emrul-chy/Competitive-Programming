#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, C, d;
    double ans, F, T;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>C>>d;
        T = (9 * C) / 5.0 + 32;
        F = T + d;
        ans = (F - 32) * 5 / 9.0;
        printf("Case %d: %0.2lf\n", i, ans);
    }
    return 0;
}
