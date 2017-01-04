#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a;
    int n, k, i;

    while(scanf("%d %d", &n, &k), n || k)
    {
        a = 1;
        if (k > (n / 2))
        {
            k = n - k;
        }
        for (i = 0; i < k; i++)
        {
            a *= (n - i);
            a /= (1 + i);
        }
        printf("%llu\n", a);
    }
    return 0;
}
