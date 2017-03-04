#include <bits/stdc++.h>
using namespace std;

int r[100005], p[100005];

int findp(int x)
{
    if(p[x] == x)
        return x;
    return p[x] = findp(p[x]);
}

int joint(int x, int y)
{
    x = findp(x);
    y = findp(y);
    if(x != y)
    {
        if(r[x] > r[y])
        {
            r[x] += r[y];
            p[y] = x;
            return r[x];
        }
        r[y] += r[x];
        p[x] = y;
        return r[y];
    }
    return r[x];
}

int main()
{
    int n, i, m, j, t;
    scanf("%d", &t);
    for(int tc = 1; tc<=t; tc++)
    {
        j=1;
        map <string, int> mp;
        scanf("%d", &n);
        char x[105], y[105];
        for(i=1; i<=min(2*n,100000); i++)
        {
            r[i] = 1;
            p[i] = i;
        }
        while(n--)
        {
            scanf("%s %s", x, y);
            if(!mp[x])
            {
                mp[x] = j;
                j++;
            }
            if(!mp[y])
            {
                mp[y] = j;
                j++;
            }
            printf("%d\n", joint(mp[x], mp[y]));
        }
    }
    return 0;
}
