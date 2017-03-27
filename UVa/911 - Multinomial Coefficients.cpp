#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll nCr(ll n, ll r)
{
    r = r > (n-r) ? r : n-r;
    ll s=1, i;
    for(i=1; i<=r; i++)
    {
        s = (s * (n-r+i)) / i;
    }
    return s;
}

int main()
{
    int n, r, t;
    while(scanf("%d", &n)==1)
    {
        scanf("%d %d", &t, &r);
        ll s = nCr(n, r);
        while(--t)
        {
            n = n - r;
            scanf("%d", &r);
            s = s * nCr(n, r);
        }
        printf("%lld\n", s);
    }
    return 0;
}
