#include <stdio.h>
int main()
{
    long long int n, i,sum;
    while(scanf("%lld", &n)==1)
    {
        if(n==0) break;
        else if(n>=1 && n<=100)
        {
            sum = 0;
            for(i=1; i<=n; i++)
            {
                sum=sum+(i*i);
            }
            printf("%lld\n", sum);
        }
    }
    return 0;
}
