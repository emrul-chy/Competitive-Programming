#include <stdio.h>
int main()
{
    int a,b,c,x,y,z;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        if((a==0 || a== 1) && (b==0 || b==1) && (c==0 || c==1))
        {
            if(a==b && b!=c)
            {
                printf("C\n");
            }
            else if( c== b && b!=a)
            {
                printf("A\n");
            }
            else if (a==c && a!=b)
            {
                printf("B\n");
            }
            else if( a==b && b==c)
            {
                printf("*\n");
            }
        }
    }
    return 0;
}
