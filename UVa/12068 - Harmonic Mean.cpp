#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, n, j=1;
    cin >> T;
    while(T--)
    {
        cin >> n;
        LL i, g, x = 1, y = 0, a[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            x *= a[i];
        }
        for(i=0; i<n; i++)
        {
            y += (x / a[i]);
        }
        n = n * x;
        g = __gcd(n, y);
        n /= g;
        y /= g;
        printf("Case %lld: %lld/%lld\n", j++, n, y);
    }
    return 0;
}
