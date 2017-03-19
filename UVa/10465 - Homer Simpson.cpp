#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int m, n, t, i, j, sum, cnt, mx;

void check(int x, int y)
{
    for(i=0; i*x<=t; i++)
    {
        sum = i*x;
        j=(t-sum)/y;
        sum += j*y;
        if(!sum)
            continue;
        if(t % sum <= cnt)
        {
            if((t % sum == cnt && (i+j) > mx) || (t % sum < cnt))
            {
                cnt = t % sum;
                mx = i+j;
            }
        }
    }
}

int main()
{
    while(scanf("%d %d %d", &n, &m, &t) == 3)
    {
        if(n > m)
            swap(n, m);
        if(t % n == 0)
            printf("%d\n", t/n);
        else
        {
            sum = 0, mx = 0, cnt  = t;
            check(n, m);
            check(m, n);
            printf("%d", mx);
            if(cnt)
                printf(" %d", cnt);
            printf("\n");
        }
    }
    return 0;
}
