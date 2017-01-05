#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll s=1, i,n;
    vector <ll> v;
    v.push_back(1);
    for(i=1; i<=10000; i++)
    {
        s *= i;
        while(s % 10 == 0)
        {
            s /= 10;
        }
        s %= 100000;
        v.push_back(s);
    }

    while(cin>> n)
    {
        if(n == 0) break;

        printf("%5lld -> %lld\n", n, v[n] % 10);
    }
    return 0;
}
