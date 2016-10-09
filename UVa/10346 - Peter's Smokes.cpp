#include <stdio.h>
int main()
{
    int n,b,a;
    while(scanf("%d %d", &n, &b)==2)
    {
        a = n;
        if(b>1)
        {
            while(n>=b)
            {
                a = a + (n/b);
                n = (n/b) + (n%b);
            }
            printf("%d\n", a);
        }
    }
    return 0;
}
