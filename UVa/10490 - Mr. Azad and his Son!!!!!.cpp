#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    int n, prime[]= {2,3,5,7,11,13,17,19,23,29,31};
    while(scanf("%d",&n), n)
    {
        int i, flg = 0;
        if(n==11 || n==23 || n==29)
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
            continue;
        }
        for(i=0; i<=10; i++)
        {
            if(prime[i]==n)
            {
                unsigned LL ans=(LL)(pow(2.0,n-1)*(pow(2.0,n)-1));
                printf("Perfect: %lld!\n",ans);
                flg = 1;
                break;
            }
        }
        if(flg == 0)
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
