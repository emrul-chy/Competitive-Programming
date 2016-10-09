#include <bits/stdc++.h>
using namespace std;
long long int rec(long long int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * rec(n - 1);
    }
}
int main()
{
    long long int n, m;

    while(cin >> n)
    {
        if(n>=8 && n<=13)
        {
            printf("%lld\n", rec(n));
        }
        else if ( (n<0 && (-1)*n % 2 == 1)  || n > 13)
        {
            printf("Overflow!\n");
        }
        else if ( (n<0 && (-1)*n % 2 == 0)  || (n >= 0 && n < 8))
        {
            printf("Underflow!\n");
        }
    }
    return 0;
}
