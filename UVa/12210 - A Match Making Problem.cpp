#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i,q=1, t, b[10005], s[10005];
    while(cin>>n>>m)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>s[i];
        }
        printf("Case %d:", q);
        if(m>=n)
        {
            printf(" 0\n");
        }
        else if( m < n)
        {
            printf(" %d", n - m);
            sort(b, b+n);
            printf(" %d\n", b[0]);
        }
        q++;
    }
    return 0;
}
