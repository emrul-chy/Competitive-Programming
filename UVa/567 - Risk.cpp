#include <bits/stdc++.h>
using namespace std;

vector <int> v[25];
int dist[25];

void bfs(int src)
{
    memset(dist, -1, sizeof dist);
    dist[src] = 0;
    queue <int> q;
    q.push(src);
    while( !q.empty() )
    {
        int x, y;
        x = q.front();
        q.pop();
        for(int i=0; i<v[x].size(); i++)
        {
            y = v[x][i];
            if( dist[y] == -1 )
            {
                dist[y] = dist[x] + 1;
                q.push(y);
            }
        }
    }
}

void init()
{
    for(int i=0; i<25; i++)
    {
        v[i].clear();
    }
}

bool read()
{
    init();
    int m, x, i;
    while(scanf("%d", &m) == 1)
    {
        
    }
    for(i=1; i<=19; i++)
    {
        if(i != 1)
        scanf("%d", &m);
        while(m--)
        {
            scanf("%d", &x);
            v[i].push_back(x);
            v[x].push_back(i);
        }
    }
    return true;
}

int main()
{
    int n, j=1, x, y;
    while(read() == true)
    {
        scanf("%d", &n);
        printf("Test Set #%d\n", j++);
        while(n--)
        {
            scanf("%d %d", &x, &y);
            bfs(x);
            printf("%2d to %2d: %d\n", x, y, dist[y]);
        }
        printf("\n");
    }
    return 0;
}
