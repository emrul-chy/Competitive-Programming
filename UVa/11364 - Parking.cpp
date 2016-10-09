#include <stdio.h>
int main()
{
    int i, t, mn, mx, n, j, v;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        mx = 0;
        for(j=0; j<n; j++)
        {
            scanf("%d", &v);
            if(j==0) mn = v;
            if(v > mx) mx = v;
            if(v < mn) mn = v;
        }
        printf("%d\n", (mx-mn)*2);
    }
    return 0;
}
