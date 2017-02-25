#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, n, i, sum, ar[1005], cnt;
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &n);
        for(i=0; i<n; i++)
        {
            scanf("%lld", &ar[i]);
        }
        sum = ar[0], cnt = 1;
        for(i=1; i<n-1; i++)
        {
            if(sum+ar[i] < ar[i+1])
            {
                cnt++;
                sum += ar[i];
            }
        }
        printf("%lld\n", cnt+1);
    }
    return 0;
}
