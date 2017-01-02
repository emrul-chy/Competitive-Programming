#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, a[25], sum, mx, j, t = 1;
    while(cin >> n)
    {
        sum = 1, mx = 0;
        ll i;
        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<=n; i++)
        {
            sum = 1;
            for(j=i; j<=n; j++)
            {
                sum *= a[j];
                mx = max(sum, mx);
            }
        }
        getchar();
        printf("Case #%lld: ", t);
        printf("The maximum product is %lld.\n\n", mx);
        t++;
    }
    return 0;
}
