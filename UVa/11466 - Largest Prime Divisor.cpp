#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, i, n, a, c;

    while(scanf("%lld", &n)==1 && n != 0)
    {
        a = -1, c = 0;

        if(n < 0)
        {
            n = n * (-1);
        }

        T = sqrt(n);

        for(i = 2; i <= T && n != 1; i++)
        {
            while(n % i == 0)
            {
                n /= i;
                a = i;
            }

            if(a == i)
            {
                c++;
            }
        }

        if(n != 1 && a != -1)
        {
            a = n;
        }

        else if(c == 1)
        {
            a = -1;
        }

        printf("%lld\n", a);
    }

    return 0;
}
