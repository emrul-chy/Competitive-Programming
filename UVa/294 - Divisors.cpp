#include <stdio.h>
#include <math.h>
int main()
{
    long long int i, q, a, b, n, t, k, j, s, mx, ans;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld", &a, &b);
        mx = 0;
        for(j=a; j<=b; j++)
        {
            q = sqrt(j);
            s = 0;
            for(k=1; k<=q; k++)
            {
                if(j % k == 0)
                {
                    s++;
                    if((j/k) != k)
                    {
                        s++;
                    }
                }
            }
            if(s > mx)
            {
                mx = s;
                ans = j;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", a, b, ans, mx);
    }
    return 0;
}
