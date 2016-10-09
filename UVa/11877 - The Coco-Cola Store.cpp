#include<stdio.h>
int main()
{
    int n, a, t, i=10;
    while(i>0)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        a=n;
        t=n;
        while(n >=3)
        {
            a=a+(n/3);
            n = (n/3)+(n%3);
        }
        if(n==2)
        {
            a++;
        }
        printf("%d\n", a-t);
    }
    return 0;
}
