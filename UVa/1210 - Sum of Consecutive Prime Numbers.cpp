#include <bits/stdc++.h>
using namespace std;

int p[11002];
int prime[10005], dp[2000];

void sieve()
{
    int N = 11002, s, sq=sqrt(N), i, j;

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

    prime[0] = 2;
    dp[0] = 2;
    j = 1;

    s = 2;

    for(i=3; i<=10000; i++)
    {
        if(!p[i])
        {
            prime[j] = i;
            s += i;
            dp[j] = s;
            j++;
        }
    }
}

int main()
{
    int n, i, j, c;
    sieve();
    while(scanf("%d", &n), n)
    {
        c = 0;
        for(i=0; i<=1228; i++)
        {
            for(j=i; j<=1228; j++)
            {
                if(j == i)
                {
                    if(prime[j] == n)
                    {
                        c++;
                        break;
                    }
                }
                else if( dp[j] - dp[i-1] == n )
                {
                    c++;
                    break;
                }
                else if( dp[j] - dp[i-1] > n )
                {
                    break;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
