#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll s=1,k, i,n;
    while(cin>> n >> k)
    {
        s=1;
        for(i=n; i>=n-k+1; i--)
        {
            s *= i;
            while(s % 10 == 0)
            {
                s /= 10;
            }
            s %= 10000000000;
        }
        printf("%lld\n", s%10);
    }
    return 0;
}
