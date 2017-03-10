#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL ar[86], i, n;
    ar[0] = 0;
    ar[1] = 1;
    for(i=2; i<=85; i++)
    {
        ar[i] = ar[i-1] + ar[i-2];
    }
    while(scanf("%lld", &n), n)
    {
        printf("%lld\n", ar[n]);
    }
    return 0;
}
