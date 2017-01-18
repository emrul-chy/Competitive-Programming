#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, y, x, m, s, i;
    while(scanf("%lld %lld", &n, &m) == 2)
    {
        x = m;
        y = n;
        if(n==0 && m==0)
        {
            break;
        }
        s = 1;
        if(n-m < m)
        {
            m = n-m;
        }
        for(i=1; i<=m; i++, n--)
        {
            s = s * n;
            s = s / i;
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n", y, x, s);
    }
    return 0;
}
