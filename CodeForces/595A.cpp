#include <stdio.h>
int main()
{
    int n, i, j, count=0, t, p[2];
    scanf("%d %d", &n, &t);
    for(i=0; i<n; i++)
    {
        for(j=0; j<t; j++)
        {
            scanf("%d %d", &p[0], &p[1]);
            if(p[0] == 1 || p[1]==1)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
