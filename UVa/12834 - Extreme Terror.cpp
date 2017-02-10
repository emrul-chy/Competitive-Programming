#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, j=1, n, a, b, k, i, s1, s2;
    scanf("%lld", &T);
    while(T--)
    {
        vector <LL> x, dif;
        s1 = s2 = 0;
        scanf("%lld %lld", &n, &k);
        for(i=0; i<n; i++)
        {
            scanf("%lld", &a);
            x.push_back(a);
            s1 += a;
        }
        for(i=0; i<n; i++)
        {
            scanf("%lld", &a);
            dif.push_back(a-x[i]);
            s2 += a;
        }
        sort(dif.begin(), dif.end());
        LL diff = s2 - s1;
        LL mx = diff;
        for(i=0; i<k; i++)
        {
            if(dif[i] > 0)
            {
                break;
            }
            diff -= dif[i];
            mx = max(diff, mx);
        }
        printf("Case %lld: ", j++);
        if(mx >= 0)
        {
            printf("%lld\n", mx);
        }
        else
        {
            printf("No Profit\n");
        }
    }
    return 0;
}
