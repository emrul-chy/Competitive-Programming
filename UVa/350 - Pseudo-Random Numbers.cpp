#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll z, i, c, n, l, m, j=1;
    while(cin >> z >> n >> m >> l && z != 0 && n != 0 && m != 0 && l != 0)
    {
        map <ll, ll> mp;
        c=0;
        while(1)
        {
            l = ((z*l)+n) % m;
            mp[l]++;
            if(mp[l] == 2) break;
            c++;
        }
        printf("Case %lld: %lld\n", j++, c);
    }
    return 0;
}
