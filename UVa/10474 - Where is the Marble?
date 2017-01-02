#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, j=1, i, q, ar[12345];
    while(scanf("%lld %lld", &n,&q) && n != 0 && q != 0)
    {
        for(i = 0; i<n; i++)
        {
            scanf("%lld", &ar[i]);
        }
        map <ll, ll> mp;
        sort(ar, ar+n);
        for(i=0; i<n; i++)
        {
            if(mp[ar[i]] == 0) mp[ar[i]] = i + 1;
        }
        printf("CASE# %lld:\n", j++);
        for(i=0; i<q; i++)
        {
            scanf("%lld", &n);
            if(mp[n] == 0)
            {
                printf("%lld not found\n", n);
            }
            else
            {
                printf("%lld found at %lld\n", n, mp[n]);
            }
        }
    }
    return 0;
}
