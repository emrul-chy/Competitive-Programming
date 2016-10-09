#include <stdio.h>
int main()
{
    int i, t, x, y, n, p, a;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &x, &y, &p);
        if(p > 1)
        {
            n = x + y;
            a=0;
            while(n >= p)
            {
                a = a + ( n /p);
                n = (n/p) + (n%p);
            }
            printf("%d\n", a);
        }
    }
    return 0;
}
