#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prime(4792);
    vector<bool> p(46340, true);

    prime[0] = 2;
    int x(1);

    for (long long i = 3; i < 46340; i += 2)
    {
        if (p[i])
        {
            for (long long j = i * i; j < 46340; j += i)
            {
                p[j] = false;
            }

            prime[x] = i;
            ++x;
        }
    }

    int n, c;
    while (scanf("%d", &n), n != 0)
    {
        printf("%d : ", n);

        int flg = 0;
        c = 1;

        if (n < 0)
        {
            n *= -1;
            printf(" -1");
            flg = true;
        }

        for (int x = 0; prime[x] * prime[x] <= n && x < 4792; ++x)
        {
            int f = 0;
            while (n % prime[x] == 0)
            {
                if(f == 0)
                {
                    c++;
                }
                f=1;
                n /= prime[x];
            }
        }
        cout << c << endl;

    }
}
