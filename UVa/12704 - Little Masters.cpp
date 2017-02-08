#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, r;
    int T;
    scanf("%d", &T);
    // hypot(x, y) = sqrt(x*y+x*y)
    while(T--)
    {
        scanf("%lf %lf %lf", &x, &y, &r);
        printf("%0.2lf %0.2lf\n", r-hypot(x, y), r+hypot(x, y));
    }
    return 0;
}
