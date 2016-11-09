#include <cstdio>
#include <vector>

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

    int n;
    while (scanf("%d", &n), n != 0)
    {
        printf("%d =", n);

        int flg = 0;


        if (n < 0)
        {
            n *= -1;
            printf(" -1");
            flg = true;
        }

        else if (n == 1)
        {
            printf(" 1");
        }
        for (int x = 0; prime[x] * prime[x] <= n && x < 4792; ++x)
        {
            while (n % prime[x] == 0)
            {
                if (flg==1)
                {
                    printf(" x %d", prime[x]);
                }
                else
                {
                    printf(" %d", prime[x]);
                }
                flg = 1;
                n /= prime[x];
            }
        }

        if (n > 1)
        {
            if (flg == 1)
            {
                printf(" x %d", n);
            }
            else
            {
                printf(" %d", n);
            }
        }

        printf("\n");
    }
}
