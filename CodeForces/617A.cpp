#include <stdio.h>
int main()
{
    int n, i, count=0;
    scanf("%d", &n);
    for(i=5; i>0; i--)
    {
        while(n>=i)
        {
            n = n - i;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
