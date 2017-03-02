#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int divSum[100005], divCnt[100005];

void divisors()
{
    int i, j;
    for(i=1; i<=100000; i++)
    {
        for(j=i; j<=100000; j+=i)
        {
            divSum[j] += i;
            divCnt[j]++;
        }
    }
}

int main()
{
    int a, b, k, i, T;
    LL s1, s2;
    divisors();
    scanf("%d", &T);
    while(T--)
    {
        s1 = s2 = 0;
        scanf("%d %d %d", &a, &b, &k);
        if( a % k != 0 )
        {
            a += (k - (a % k));
        }
        for(i = a; i<=b; i+=k)
        {
            s1 += divCnt[i];
            s2 += divSum[i];
        }
        printf("%lld %lld\n", s1, s2);
    }
    return 0;
}
