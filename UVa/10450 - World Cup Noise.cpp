#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, i, ar[52], t;
    ar[1] = 2, ar[2] = 3;
    for(i=3; i<52; i++)
    {
        ar[i] = ar[i-1] + ar[i-2];
    }
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        printf("Scenario #%lld:\n%lld\n\n", i, ar[n]);
    }
    return 0;
}
