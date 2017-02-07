#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    int j = 1;
    while(scanf("%lf %lf", &a, &b)==2)
    {
        printf("Case %d: ", j++);
        if(a > b)
        {
            printf("Bigger\n");
        }
        else if(a < b)
        {
            printf("Smaller\n");
        }
        else
        {
            printf("Same\n");
        }
    }
    return 0;
}
