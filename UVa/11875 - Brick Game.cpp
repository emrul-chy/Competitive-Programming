#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, t, i, k, a[15], in, de, ans;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<n; j++)
        {
            in = 0, de = 0;
            for(k=0; k<n; k++)
            {
                if(k != j)
                {
                    if(a[k] > a[j])
                    {
                        in++;
                    }
                    else
                    {
                        de++;
                    }
                }
            }
            if( in == de )
            {
                ans = a[j];
            }
        }
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
