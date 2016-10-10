#include <bits/stdc++.h>
using namespace std;
long long a[100000000], x[100000000], t, n, i;
int main()
{
    while(scanf("%lld", &n)==1)
    {
        a[n]++;
        x[t]= n;
        t++;
    }
    for(i=0; i<t; i++)
    {
        if(a[x[i]] != 0)
        {
            printf("%lld %lld\n", x[i], a[x[i]]);
            a[x[i]]=0;
        }
    }
    return 0;
}
