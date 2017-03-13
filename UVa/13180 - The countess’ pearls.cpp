#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    int i, l, j, flg, x;
    while(scanf("%d", &x),x)
    {
        int v[1005], mx = 0;
        map <int, int> mp;
        v[0] = x;
        mp[x] = 1;
        l = 1;
        mx = x;
        while(scanf("%d", &x), x)
        {
            if(!mp[x])
            {
                v[l++] = x;
            }
            mp[x]++;
            mx = max(x, mx);
        }
        flg = 0;
        for(i=0; i<l; i++)
        {
            if(mp[v[i]] % 2 == 1 && v[i] != mx)
            {
                flg = 1;
                break;
            }
        }
        if(mp[mx] > 1)
            flg = 1;
        if(flg)
        {
            printf("NO\n");
            continue;
        }
        sort(v, v+l);
        for(i=0; i<l-1; i++)
        {
            for(j=1; j<=mp[v[i]]/2; j++)
            {
                printf("%d ", v[i]);
            }
        }
        printf("%d", v[l-1]);
        for(i=l-2; i>=0; i--)
        {
            for(j=1; j<=mp[v[i]]/2; j++)
            {
                printf(" %d", v[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
