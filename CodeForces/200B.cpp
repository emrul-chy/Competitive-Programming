#include <bits/stdc++.h>
using namespace std;
int main()
{
    double ans = 0, sum = 0;
    int i, t, a;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> a;
        sum += a / 100.0;
    }
    ans = sum * 100 / (double) t;
    printf("%0.12lf\n", ans);
    return 0;
}
