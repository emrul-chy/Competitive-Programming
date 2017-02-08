#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll rec(ll n)
{
    if(n == 0)
    {
        return 0;
    }
    return rec(n/2)+n%2;
}

int main()
{
    ll T, n;
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &n);
        printf("%lld\n", rec(n));
    }
    return 0;
}
