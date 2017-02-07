#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[15], b[15], i, f, j=1, T, n, L, s;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &n, &L);
        s=f=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
            s += a[i];
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d", &b[i]);
            if(a[i] > b[i])
            {
                f = 1;
            }
        }
        if(s > L)
        {
            f = 1;
        }
        printf("Case %d: ", j++);
        if(f)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
