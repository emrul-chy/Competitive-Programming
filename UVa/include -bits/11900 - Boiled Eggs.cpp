#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    int T, n, p, sum, ar[100], x, i, j=1;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d", &n, &p, &sum);
        for(i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        n = min(n, p), i=0, x=0;
        while(i < n && ar[i]+x <= sum)
        {
            x += ar[i];
            i++;
        }
        printf("Case %d: %d\n", j++, i);
    }
    return 0;
}
