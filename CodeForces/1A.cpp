#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, n, x=0, y=0, c, ans;
    cin >> a >> b >> c;
    x = a / c;
    x = ceil(x);
    y = b / c;
    y = ceil(y);
    ans = x * y;
    printf("%0.0lf\n", ans);
    return 0;
}
