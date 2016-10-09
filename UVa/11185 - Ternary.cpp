#include<stdio.h>
int main()
{
    long int d,  q, a, t[100],i,j;
    while(scanf("%ld",&d)==1)
    {
        if(d<0) break;
        for(i=0; ; i++)
        {
            a = d % 3;
            t[i] =a;
            d = d/3;
            if(d==0) break;
        }
        for(j = i ; j>= 0; j--)
        {
            printf("%ld",t[j]);
        }
        printf("\n");
    }
    return 0;
}
