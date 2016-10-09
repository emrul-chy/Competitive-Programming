#include <stdio.h>
int main()
{
    long long int n, i, sum,sum1, f[102];
    while(scanf("%lld", &n)==1)
    {
        if(n<0) break;
        f[0] =0;
        f[1] =1;
        sum = f[0];
        sum1 = f[0] + f[1];

        for(i=2; i<=(n+1); i++)
        {
            f[i] = f[i-2] + f[i-1];
            sum+=f[i-1];
            sum1+=f[i];
        }
        printf("%lld %lld\n", sum, sum1);
    }
    return 0;
}
