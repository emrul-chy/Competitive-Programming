#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, s;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &s);
        printf("%lld\n", (s*(s+2)));
    }
    return 0;
}
