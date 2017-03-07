#include <bits/stdc++.h>
#define LL unsigned long long int
using namespace std;

int main()
{
    LL n, x;
    while(scanf("%llu", &n) == 1)
    {
        if(!n)
            break;
        x = (n * 10) / 9;
        if(!(n % 9))
            printf("%llu %llu\n", x-1, x);
        else
            printf("%llu\n", x);
    }
    return 0;
}
