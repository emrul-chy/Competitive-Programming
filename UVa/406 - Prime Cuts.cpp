#include <bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    int i, r;
    r = sqrt(n);
    if(n == 1 || n == 0)
    {
        return 0;
    }
    for(i=2; i<=r ; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    if(n % 2 == 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i, t, n, j, c, prime[1005];
    while(cin >> n >> c)
    {
        j = 1;
        prime[j++] = 1;
        prime[j++] = 2;
        for(i=0; i<=n; i++)
        {
            if(is_prime(i) == 1)
            {
                prime[j++] = i;
            }
        }
        j -= 1;
        printf("%d %d:", n, c);
        if(n == c || (2*c) >= j )
        {
            if(n == 0 || n == 1)
            {
                printf(" 1");
            }
            else
            {
                for( i=1; i<=j; i++)
                {
                    printf(" %d", prime[i]);
                }
            }
        }
        else if(j % 2 == 0)
        {
            t = j - ( 2 * c);
            t /= 2;

            for( i=t+1; i<=t+(2*c); i++)
            {
                printf(" %d", prime[i]);
            }
        }
        else if(j % 2 == 1)
        {
            t = j - ( 2 * c - 1);
            t /= 2;
            for( i=t+1; i<=t+(2*c-1); i++)
            {
                printf(" %d", prime[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
