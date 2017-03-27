#include <bits/stdc++.h>
#define MX 11
#define INF 1061109567
using namespace std;

vector < pair<int, int> > v[MX];
int dist[MX], visited[MX];
int p[MX];

void path(int x, int y)
{
    if(x == y)
    {
        printf("%d", y);
        return;
    }
    path(p[x], y);
    printf(" %d", x);
}

void bfs(int src)
{
    int i, x, y, c;
    memset(visited, 0, sizeof visited);
    memset(dist, 0x3f, sizeof dist);
    queue <int> q;
    q.push(src);
    dist[src] = 0;
    while( !q.empty() )
    {
        x = q.front();
        q.pop();
        visited[x] = 0;
        for(i=0; i<v[x].size(); i++)
        {
            y = v[x][i].first;
            c = v[x][i].second;
            if(dist[x] + c < dist[y])
            {
                dist[y] = dist[x] + c;
                p[y] = x;
                if( !visited[y] )
                {
                    q.push(y);
                    visited[y] = 1;
                }
            }
        }
    }
}

int main()
{
    int x, y, n, m, i, c, j=1, U, V;

    while(scanf("%d", &n), n)
    {
        for(i=0; i<MX; i++)
        {
            v[i].clear();
        }
        memset(p, 0, sizeof p);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &m);
            while(m--)
            {
                scanf("%d %d", &U, &V);
                v[i].push_back(make_pair(U, V));
            }
        }
        scanf("%d %d", &x, &y);
        bfs(x);
        printf("Case %d: Path = ", j++);
        path(y, x);
        printf("; %d second delay\n", dist[y]);
    }
    return 0;
}
