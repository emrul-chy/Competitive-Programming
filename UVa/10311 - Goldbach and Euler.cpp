#include <bits/stdc++.h>
using namespace std;
int p[100000005];

void siv()
{
    int N = 100000005, sq=sqrt(N), i, j;
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
}

int main()
{
    siv();
    int n, i, f;
    while(scanf("%d", &n)==1)
    {
        if(n == 0)
        {
            break;
        }
        if(n == 1)
        {
            printf("%d is not the sum of two primes!\n", n);
            continue;
        }
        f = 0;
        if(n & 1)
        {
            if(!p[n-2])
            {
                f = 1;
            }
        }
        else
        {
            for(i=n/2-1; i>=1; i--)
            {
                if(!p[i] && !p[n-i])
                {
                    f=2;
                    break;
                }
            }
        }
        if(f)
        {
            printf("%d is the sum of %d and %d.\n", n, (f==1) ? 2 : i, (f==1) ? n - 2 : n - i);
        }
        else
        {
            printf("%d is not the sum of two primes!\n", n);
        }
    }
    return 0;
}
