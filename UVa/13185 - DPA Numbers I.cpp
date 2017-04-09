#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int divSum[1005];

void divisors()
{
    int i, j;
    for(i=1; i<=1000; i++)
    {
        for(j=i; j<=1000; j+=i)
        {
            divSum[j] += i;
        }
    }
}

int main()
{
    int n, x, T;
    divisors();
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        x = divSum[n] - n;
        if(x < n)
            printf("deficient\n");
        else if(x > n)
            printf("abundant\n");
        else
            printf("perfect\n");
    }
    return 0;
}
