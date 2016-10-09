#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, t, k, j, s;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        s = 0;
        for(j=1; j<=(int)sqrt(n); j++)
        {
            if(n % j == 0)
            {
                if(j % k != 0 )
                {
                    s += j;
                }
                if((n/j) % k != 0 && (n/j) != j)
                {
                    s += (n/j);
                }
            }
        }
        printf("%d\n", s);
    }
    return 0;
}
