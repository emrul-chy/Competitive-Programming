#include <bits/stdc++.h>
using namespace std;

int p[5000010];
int primes[5000010];
int ar[5000005];

void sieve()
{
    int N = 5000005, sq=sqrt(N), i, j;
    for(i=4; i<=N; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i] == 0)
        {
            for(j=i*i; j<=N; j+=i)
            {
                p[j]=1;
            }
        }
    }
    p[1] = 1;
    p[0] = 1;
    primes[0] = 2;
    j=1;
    for(i=3; i<=N; i+=2)
    {
        if(p[i] == 0)
            primes[j++] = i;
    }
}

int main()
{
    sieve();
    int sum = 0, i, j, n, cnt=0, flg;
    for(j=2; j<=5000000; j++)
    {
        n = j;
        if(p[j] == 0)
        {
            cnt++;
            ar[j] = cnt;
            continue;
        }
        
        flg = 0;
        sum = 0;
        
        while (n%2 == 0)
        {
            flg = 1;
            n = n/2;
        }
        if(flg)
            sum = 2;

        for (i=0; primes[i] <= sqrt(n); i++)
        {
            flg = 0;
            while(n % primes[i] == 0)
            {
                flg = 1;
                n = n/primes[i];
            }
            if(flg)
                sum += primes[i];
        }

        if (n > 2)
            sum += n;
            
        if(p[sum] == 0)
        {
            cnt++;
        }
        
        ar[j] = cnt;
    }
    
    int a, b;
    
    while(scanf("%d", &a), a)
    {
        scanf("%d", &b);
        printf("%d\n", ar[b] - ar[a-1]);
    }
    return 0;
}
