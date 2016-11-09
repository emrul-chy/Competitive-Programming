#include <bits/stdc++.h>
using namespace std;
long long int p[1000008];
long long int prime[80000], nP=2;
void siv()
{
    long long int N = 1000003, sq=sqrt(N), i, j;
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
    for(i=2; i<=N; i++)
    {
        if(p[i] == 0)
        {
            prime[nP++] = i;
        }
    }
}
int main()
{
    siv();
    long long int N, i;
    while (cin >> N)
    {
        if (N < 0)
        {
            break;
        }
        for ( i = 2; i<nP ; i++)
        {
            while (N % prime[i] == 0)
            {
                printf("    %lld\n",prime[i]);
                N /= prime[i];
            }
            if (N == 1)
            {
                break;
            }
        }
        if (N != 1)
        {
            printf("    %lld\n",N);
        }
        printf("\n");
    }
    return 0;
}
