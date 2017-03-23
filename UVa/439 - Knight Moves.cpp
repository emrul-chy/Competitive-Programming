#include <bits/stdc++.h>
using namespace std;

int x[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int y[] = {1, 2, 2, 1, -1, -2, -2, -1};

int dist[8][8];

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
        for (i = 0; i < 8; i++)
        {
            U = X + x[i], V = Y + y[i];
            if (U >= 0 && U < 8 && V >= 0 && V < 8 && dist[U][V] == -1)
            {
                dist[U][V] = dist[X][Y] + 1;
                q.push(make_pair(U, V));
            }
        }
    }
}

int main()
{
    int x1, x2, y1, y2;
    string s;
    char a, b;
    while(getline(cin, s))
    {
        memset(dist, -1, sizeof dist);
        x1 = s[0] - 'a', y1 = s[3] - 'a';
        x2 = s[1] - '1', y2 = s[4] - '1';
        bfs(x1, x2);
        printf("To get from %c%c to %c%c takes %d knight moves.\n", s[0], s[1], s[3], s[4], dist[y1][y2]);
    }
    return 0;
}
