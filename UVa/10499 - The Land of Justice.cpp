#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld", &n) && n >= 0)
    {
        printf((n == 1) ? "0%%\n" : "%lld%%\n", 25*n);
    }
    return 0;
}
