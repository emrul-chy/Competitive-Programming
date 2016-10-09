#include <bits/stdc++.h>
using namespace std;
int main()
{
    char st[15];
    struct viru
    {
        char s[15];
    };
    static struct viru arr[10000];
    int n, i,l,ll,k, s=0, t, j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            scanf("%s", arr[i].s);
        }
        cin>>st;
        l = strlen(st);
        printf("Case %d:\n", j);
        for(i=0; i<n; i++)
        {
            s=0;
            ll =strlen(arr[i].s);
            if(l==ll)
            {
                for(k=0; k<ll; k++)
                {
                    if(arr[i].s[k] == st[k])
                    {
                        s++;
                    }
                }
                if(s == ll - 1 || s == ll) cout<<arr[i].s<<endl;
            }
        }
    }
    return 0;
}
