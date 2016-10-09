#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, n, s, p, m,k, j, a[100000], b[100000];
    cin>>t;
    for(i=0; i<t; i++)
    {
        m = -9999;
        cin>>n;
        for(j=0; j<n; j++ )
        {
            cin>>a[j]>>b[j];
        }
        for(k=0; k<n; k++)
        {
            s =0;
            for(j=0; j<n; j++)
            {
                if(b[k] > b[j]) continue;
                s+=a[j];
            }
            s *= b[k];
            if(s>m)
            {
                m = s;
            }
        }
        printf("Case %lld: %lld\n",i+1, m);
    }
    return 0;
}
