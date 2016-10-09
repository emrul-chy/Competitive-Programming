#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1, t, j, a[12], b[12];
    while(cin>>t)
    {
        if(t<0)
        {
            break;
        }
        int n = t;
        printf("Case %d:\n", i);
        for(j=0; j<12; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<12; j++)
        {
            cin>>b[j];
        }
        for(j=0; j<12; j++)
        {
            if(b[j] <= n)
            {
                n -= b[j];
                printf("No problem! :D\n");
            }
            else if(b[j] > n)
            {
                printf("No problem. :(\n");
            }
            n += a[j];
        }
        i++;
    }
    return 0;
}
