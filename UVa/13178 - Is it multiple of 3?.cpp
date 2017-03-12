#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, n;
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &n);
        printf(((n*(n+1)/2) % 3 == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}
