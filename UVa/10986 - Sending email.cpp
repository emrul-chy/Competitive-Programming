#include <bits/stdc++.h>
#define MX 50005
#define INF 1061109567
using namespace std;

vector < pair<int, int> > v[MX];
int dist[MX], visited[MX];

void vclear()
{
    for(int i=0; i<MX; i++)
    {
        v[i].clear();
    }
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
    int n, m, x, y, t, i, c, U, V, j=1;
    scanf("%d", &t);
    while(t--)
    {
        vclear();
        scanf("%d %d %d %d", &n, &m, &x, &y);
        while(m--)
        {
            scanf("%d %d %d", &U, &V, &c);
            v[U].push_back({V, c});
            v[V].push_back({U, c});
        }
        bfs(x);
        printf("Case #%d: ", j++);
        (dist[y] == INF) ? printf("unreachable\n") : printf("%d\n", dist[y]);
    }
    return 0;
}
