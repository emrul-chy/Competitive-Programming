#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b;

    while(cin >> n)
    {
        b = sqrt(2 * n) + .5;
        a = b * (b + 1) / 2 - n ;
        printf("%lld/%lld\n",a+1, b-a);
    }
    return 0;
}
