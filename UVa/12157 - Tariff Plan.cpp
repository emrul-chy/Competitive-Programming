#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, n, m, j, k, du;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        m = 0, j = 0;
        for(k=0; k<n ; k++)
        {
            cin>>du;
            m += 10, j+= 15;
            m += (du / 30) * 10;
            j += (du / 60) * 15;
        }
        if(j < m)
        {
            printf("Case %lld: Juice %lld\n", i, j);
        }
        else if ( m < j)
        {
            printf("Case %lld: Mile %lld\n", i, m);
        }
        else if(m==j)
        {
            printf("Case %lld: Mile Juice %lld\n", i, m);
        }
    }
    return 0;
}
