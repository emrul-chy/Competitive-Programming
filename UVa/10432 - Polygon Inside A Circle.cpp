#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
    double n, r;
    while(scanf("%lf %lf", &r, &n) == 2)
    {
        printf("%.3lf\n", r*r*(n/2.00) * sin((2.00*pi)/n));
    }
    return 0;
}
