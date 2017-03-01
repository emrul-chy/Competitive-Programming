#include <bits/stdc++.h>
#define LL long long int
using namespace std;

#define MX 205

int ar[MX], c[MX];
vector <int> v[MX];

void bfs(int src)
{
    int x, y, i;
    queue <int> q;

    memset(ar, 0, sizeof ar);
    memset(c, -1, sizeof c);

    q.push(src);
    c[src] = 0;

    while(!q.empty())
    {
        x = q.front();
        q.pop();

        for(i=0; i<v[x].size(); i++)
        {
            y = v[x][i];
            if(ar[y] == 0 && c[y] == -1)
            {
                ar[y] = 1;
                c[y] = c[x] + 1;
                q.push(y);
            }
        }
    }
}

int main()
{
    int n, j = 1;
    while(scanf("%d", &n)==1)
    {
        if(!n)
        {
            break;
        }
        int i, x, y, t = 1, mx = 0, cnt;
        map <int, int> mp;
        for(i=0; i<MX; i++)
        {
            v[i].clear();
        }
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &x, &y);
            if(!mp[x])
            {
                mp[x] = t;
                t++;
            }
            x = mp[x];
            if(!mp[y])
            {
                mp[y] = t;
                t++;
            }
            y = mp[y];
            v[x].push_back(y);
            v[y].push_back(x);
        }
        while(scanf("%d %d", &x, &y) == 2)
        {
            if(!x && !y)
            {
                break;
            }
            bfs(mp[x]);
            cnt = 0;
            int u = x;
            x = mp[x];
            for(i=1; i<t; i++)
            {
                if(i != x)
                {
                    if(c[i] == -1 || c[i] > y)
                    {
                        cnt++;
                    }
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", j++, cnt, u, y);
        }
    }
    return 0;
}
