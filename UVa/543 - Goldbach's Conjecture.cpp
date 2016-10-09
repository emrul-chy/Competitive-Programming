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
    int n;
    while(scanf("%d", &n)==1)
    {
        if(n == 0)
        {
            break;
        }
        int i, j, a=0, b=0, c = 0;;
        for(i=1; i<=n/2; i++)
        {
            j = n - i;
            if(is_prime(i)==1 && is_prime(j) == 1)
            {
                a = min(i,j);
                b = max(i,j);
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
        else
        {
            printf("%d = %d + %d\n", n, a, b);
        }
    }
    return 0;
}
