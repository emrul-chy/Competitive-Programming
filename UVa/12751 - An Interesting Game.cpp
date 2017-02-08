#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll s(ll n)
{
    return (n * (n+1)) / 2;
}

int main()
{
    ll j, a, T, n, x, k;
    scanf("%lld", &T);
    for(j=1; j<=T; j++)
    {
        scanf("%lld %lld %lld", &n, &k, &x);
        a = s(x-1) + s(n) - s(x+k-1);
        printf("Case %lld: %lld\n", j, a);
    }
    return 0;
}
