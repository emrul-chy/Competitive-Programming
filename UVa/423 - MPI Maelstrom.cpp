#include <bits/stdc++.h>
#define MX 50005
#define INF 1061109567
using namespace std;

vector < pair<int, int> > v[MX];
int dist[MX], visited[MX];

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
    int n, i, c, mx = 0, j=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            string str;
            cin >> str;
            if(str == "x")
                continue;
            c = atoi(str.c_str());
            v[i].push_back({j, c});
            v[j].push_back({i, c});
        }
    }
    bfs(1);
    for(i=1; i<=n; i++)
    {
        mx = max(mx, dist[i]);
    }
    cout << mx << endl;
    return 0;
}
