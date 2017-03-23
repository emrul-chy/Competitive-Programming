#include <bits/stdc++.h>
#define MX 1005
#define INF 1061109567
#define PII pair<int, int>
#define PIP pair<int, PII>
using namespace std;

int n, m;

int x[] = {-1, 1, 0, 0};
int y[] = {0, 0, -1, 1};

int dist[MX][MX];
int cost[MX][MX];

void bfs(int u, int v)
{
    priority_queue < PIP, vector<PIP>, greater <PIP> > q;
    int i, U, V, X, Y, C;
    PII F;
    PIP E;
    dist[u][v] = cost[u][v];
    q.push(PIP(dist[u][v], PII(u, v)));
    while( !q.empty() )
    {
        E = q.top();
        F = E.second;
        X = F.first;
        Y = F.second;
        q.pop();
        for (i = 0; i < 4; i++)
        {
            U = X + x[i], V = Y + y[i];
            if (U >= 1 && U <= n && V >= 1 && V <= m)
            {
                if(dist[X][Y] + cost[U][V] < dist[U][V])
                {
                    dist[U][V] = dist[X][Y] + cost[U][V];
                    q.push(PIP(dist[U][V], PII(U, V)));
                }
            }
        }
    }
}

int main()
{
    int i, j, r, c, u, p, q, t;
    scanf("%d", &t);
    while(t--)
    {
        memset(dist, 0x3f, sizeof dist);
        scanf("%d %d", &n, &m);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d", &cost[i][j]);
            }
        }
        bfs(1, 1);
        printf("%d\n", dist[n][m]);
    }
    return 0;
}
