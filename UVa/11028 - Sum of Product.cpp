#include <bits/stdc++.h>
#define LL long long int
using namespace std;

map <LL, LL> mp;

void gen()
{
    LL ar[25], i, j, n, sum;
    for(i=1; i<=20; i++)
    {
        for(j=0; j<i; j++)
        {
            ar[j] = j;
        }
        set <LL> s;
        while(next_permutation(ar, ar+i))
        {
            sum = 0;
            for(j=1; j<i; j++)
            {
                sum += ar[i-1]*ar[i];
            }
            sum += ar[0]*ar[n-1];
            s.insert(sum);
        }
        mp[i] = s.size();
    }
}

int main()
{
    //gen();
    LL ar[30] = { 0, 1, 1, 1, 3, 8, 21, 43, 69, 102, 145, 197, 261,
                  336, 425, 527, 645, 778, 929, 1097, 1285, 1492,
                  1721, 1971, 2245, 2542, 2865, 3213, 3589 };
    LL n, j=1;
    while(scanf("%lld", &n), n)
    {
        printf("Case #%lld: %lld\n", j++, ar[n]);
    }
    return 0;
}
