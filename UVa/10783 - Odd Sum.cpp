#include <stdio.h>
int main()
{
    int a, b, i, j, t, temp, sum;
    scanf("%d", &t);
    for(i=0; i<t ; i++)
    {
        sum = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a<=100 && b <=100)
        {
            if(a>b)
            {
                temp =a;
                a = b;
                b = temp;
            }
            for(j=a; j<=b; j++)
            {
                if(j % 2 == 1 )
                {
                    sum = sum+j;
                }
            }
            printf("Case %d: %d\n", i+1, sum);
        }
    }
    return 0;
}
