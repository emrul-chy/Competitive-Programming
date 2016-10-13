#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, a, b, c, d, n, i, j = 1;

    cin >> T;

    while(T--)
    {
        cin >> n;
        for(i=2; i<=n; i++)
        {
            if((n / i) * i == n && i != n && (n/i) != n)
            {
                a = i;
                b = (n/i);
                break;
            }
        }
        for(i=2; i<=n; i++)
        {
            if((n / i) * i == n && i != a && (n / i) != b && i != b && (n / i) != a && i != n && (n/i) != n)
            {
                c = i;
                d = (n/i);
                break;
            }
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n", j, n, a, b, c, d);
        j++;
    }

    return 0;
}
