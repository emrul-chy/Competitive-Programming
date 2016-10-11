#include <stdio.h>
int main()
{
    long long int a, b, c, max=0, min, sum[4], i, j;
    scanf("%lld %lld %lld", &a, &b, &c);
    sum[0] = a+b+c;;
    sum[1] = 2*a + 2*b;
    sum[2] = 2*b + 2*c;
    sum[3] = 2*a + 2*c;
    for(i=0; i<4; i++)
    {
        if(sum[i] > max)
        {
            max = sum[i];
        }
    }
    min = max;
    for(i=0; i<4; i++)
    {
        if(sum[i] < min)
        {
            min = sum[i];
        }
    }
    printf("%lld\n", min);
    return 0;
}
