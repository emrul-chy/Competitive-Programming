#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, j=1, x, n, mx;
    scanf("%lld", &T);
    while(T--)
    {
        mx = 0;
        scanf("%lld", &n);
        while(n--)
        {
            scanf("%lld", &x);
            mx = max(mx, x);
        }
        printf("Case %lld: %lld\n", j++, mx);
    }
    return 0;
}
