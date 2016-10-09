#include <bits/stdc++.h>
using namespace std;
int main()
{
    double c1, c2, c3, ans;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> c1 >> c2 >> c3;
        ans = sqrt((c1*c2*c3*(c1+c2+c3)));
        ans -= .5 * (((c1*c1)*acos(1 - (2*c2*c3)/((c1+c2)*(c1+c3)))) + ((c2*c2)*acos(1 - (2*c1*c3)/((c2+c1)*(c2+c3)))) + ((c3*c3)*acos(1 - (2*c2*c1)/((c3+c2)*(c1+c3)))));
        printf("%.6lf\n", ans);
    }
    return 0;
}
