#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll p[11000002], N = 11000002, v[11000002];

void siv()
{
    ll sq=sqrt(N), i, j;
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
    ll n, i, c=2, j=0;
    v[0] = 2;
    v[1] = 3;
    for(i=2; i<N; i++)
    {
        if(p[i] == 0)
        {
            v[c] = i;
            c++;
        }
    }
    while(cin >> n)
    {
        if(n < 8)
        {
            printf("Impossible.\n");
        }
        else
        {
            if(n % 2 == 0)
            {
                printf("2 2 ");
                n -= 4;
            }
            else
            {
                printf("2 3 ");
                n-=5;
            }
            for(i=0; i < c && v[i] < n; i++)
            {
                j = n - v[i];
                if(p[j] == 0)
                {
                    break;
                }
            }
            printf("%lld %lld\n", v[i], j);
        }
    }
    return 0;
}
