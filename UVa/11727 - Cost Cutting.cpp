#include <stdio.h>
int main()
{
    int i, t, a, b, c;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if( a >= 1000 && b>=1000 && c>=1000 && a<=10000 && b<=10000 && c<=10000)
        {
            if((a>c && a<b) || (a>b && a<c))
                printf("Case %d: %d\n",i+1, a);
            else if((b>c && b<a) ||(b>a && b<c))
                printf("Case %d: %d\n",i+1, b);
            else
                printf("Case %d: %d\n", i+1, c);
        }
    }
    return 0;
}
