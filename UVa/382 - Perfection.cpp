#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n, s, q;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld", &n)==1)
    {
        if(n == 0)
        {
            break;
        }
        s = 0;
        for(i=1; i<=n/2; i++)
        {
            if(n % i == 0)
            {
                s += i;
            }
        }
        printf("%5lld  ", n);
        if(s == n)
        {
            printf("PERFECT\n");
        }
        else if(s < n)
        {
            printf("DEFICIENT\n");
        }
        else if( s > n)
        {
            printf("ABUNDANT\n");
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
