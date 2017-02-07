#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, x, i, n;
    while(scanf("%d", &n), n)
    {
        a = abs(floor((1-(double)sqrt(1+(8*n)))/2.0));
        if((a*(a+1)/2) == n)
        {
            a++;
        }
        printf("%d %d\n", (a*(a+1)/2)-n, a);
    }
    return 0;
}
