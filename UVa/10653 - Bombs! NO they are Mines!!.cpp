#include <bits/stdc++.h>
using namespace std;

int n, m;

int x[] = {-1, 1, 0, 0};
int y[] = {0, 0, -1, 1};

int dist[1005][1005];

void bfs(int u, int v)
{
    int i, U, V, X, Y;
    queue< pair <int, int> > q;
    dist[u][v] = 0;
    q.push(make_pair(u, v));
    while( !q.empty() )
    {
        X = q.front().first;
        Y = q.front().second;
        q.pop();
        for (i = 0; i < 4; i++)
        {
            U = X + x[i], V = Y + y[i];
            if (U >= 0 && U < n && V >= 0 && V < m && dist[U][V] == -1)
            {
                dist[U][V] = dist[X][Y] + 1;
                q.push(make_pair(U, V));
            }
        }
    }
}

int main()
{
    int i, r, c, u, v, p, q;
    while (scanf("%d %d", &n, &m), n && m)
    {
        memset(dist, -1, sizeof dist);
        int t = 0;
        scanf("%d", &t);
        while (t--)
        {
            scanf("%d %d", &r, &i);
            while (i--)
            {
                scanf("%d", &c);
                dist[r][c] = -2;
            }
        }
        scanf("%d %d %d %d", &u, &v, &p, &q);
        bfs(u, v);
        printf("%d\n", dist[p][q]);
    }
    return 0;
}
