#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    while(scanf("%lld %lld", &n, &m)==2 && n!= 0 && m != 0)
    {
        printf("%lld\n", m/5-n/5+1);
    }
    return 0;
}
