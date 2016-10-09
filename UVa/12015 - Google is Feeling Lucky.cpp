#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t;
    struct uv
    {
        char c[100];
        int v;
    };
    static struct uv a[20];
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        int j, m =0;
        for(j=0; j<10; j++)
        {
            cin>>a[j].c>>a[j].v;
        }
        printf("Case #%d:\n", i);
        for(j=0; j<10; j++)
        {
            if(a[j].v>m)
            {
                m = a[j].v;
            }
        }
        for(j=0; j<10; j++)
        {
            if(a[j].v==m)
            {
                printf("%s\n", a[j].c);
            }
        }
    }
    return 0;
}
