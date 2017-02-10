#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL solve(LL n)
{
    LL a, b;
    a = b = n/2;
    if(n & 1)
    {
        b++;
    }
    return (a*(a-1))/2 + (b*(b-1))/2;
}

int main()
{
    LL T, n;
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &n);
        printf("%lld\n", solve(n));
    }
    return 0;
}
