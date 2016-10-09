#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, N, j, X, a, F;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>N;
        j = 0;
        printf("Case %lld:", i);
        for (j=(int)sqrt(N); j>=1; j--)
        {
            int mau = j*j;
            if (mau>=N)
            {
                continue;
            }
            int x = N - mau;
            if (x%j==0)
            {
                printf(" %d", x);
            }
        }
        printf("\n");
    }
    return 0;
}
