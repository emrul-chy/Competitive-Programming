#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL n, i, ar[4];
    scanf("%lld", &n);
    while (n--)
    {
        for(i=0; i<4; i++)
        {
            scanf("%lld", &ar[i]);
        }
        sort(ar, ar + 4);

        if (ar[0] == ar[1] && ar[1] == ar[2] && ar[2] == ar[3] && ar[3] == ar[0])
        {
            printf("square\n");
            continue;
        }

        if (ar[0] == ar[1] && ar[2] == ar[3])
        {
            printf("rectangle\n");
            continue;
        }

        if (ar[0] + ar[1] + ar[2] >= ar[3])
        {
            printf("quadrangle\n");
            continue;
        }
        printf("banana\n");
    }
    return 0;
}
