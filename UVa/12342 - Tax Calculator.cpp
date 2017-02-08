#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, a, n, j=1;
    cin >> T;
    while(T--)
    {
        cin >> n;
        a=0;
        if(n <= 180000)
        {
            a = 0;
        }
        else
        {
            n -= 180000;
            if(n <= 300000)
            {
                a += (double)ceil((double)ceil((n * 10) / 100.0));

                n = 0;
            }
            else
            {
                a += (double)ceil((double)ceil((300000 * 10) / 100.00));

                n -= 300000;
            }
            if(n <= 400000)
            {
                a += (double)ceil((n * 15) / 100.0);

                n = 0;
            }
            else
            {
                a += (double)ceil((400000 * 15) / 100.0);

                n -= 400000;
            }
            if(n <= 300000)
            {
                a += (double)ceil((n * 20) / 100.0);

                n = 0;
            }
            else
            {
                a += (double)ceil((300000 * 20) / 100.0);

                n -= 300000;
            }
            if(n > 0)
            {
                a += (double)ceil((n * 25) / 100.0);

            }
            a = max((long long)2000, a);
        }
        printf("Case %lld: %lld\n", j++, a);
    }
    return 0;
}
