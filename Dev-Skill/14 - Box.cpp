#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double ans, a, b, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        ans = sqrt((a*a)+(b*b)+(c*c));
        printf("%0.2lf\n", ans);
    }
    return 0;
}
