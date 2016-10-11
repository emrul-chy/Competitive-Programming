#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double R, r;
    scanf("%d %lf %lf", &n, &R, &r);
    if (   n == 1 && r <= R || n == 2 && r * 2 <= R || asin(r / (R - r)) * n <= 3.1415927)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
