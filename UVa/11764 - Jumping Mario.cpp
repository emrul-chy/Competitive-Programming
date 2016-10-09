#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, i, j=1, mx, mn, n, a[100];
    cin >> t;
    while(t--)
    {
        cin >> n;
        mx = 0, mn = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<n; i++)
        {
            if(a[i] > a[i-1])
            {
                mx++;
            }
            if(a[i] < a[i-1])
            {
                mn++;
            }
        }
        printf("Case %lld: %lld %lld\n", j, mx, mn);
        j++;
    }
    return 0;
}
