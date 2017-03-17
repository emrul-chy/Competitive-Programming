#include <bits/stdc++.h>
using namespace std;

void bfs(int src, vector <int> v[], int visited[], int n)
{
    int i, x, y, cnt=0;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        for(i=0; i<v[x].size(); i++)
        {
            y = v[x][i];
            if( !visited[y] )
            {
                visited[y] = 1;
                q.push(y);
                cnt++;
            }
        }
    }
    cnt = n - cnt;
    printf("%d", cnt);
    for(i=0; i<n; i++)
    {
        if( !visited[i] )
        {
            printf(" %d", i+1);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        vector <int> v[n+5];
        int visited[n+5];
        int x, u;
        while(scanf("%d", &x), x)
        {
            while(scanf("%d", &u), u)
            {
                v[x-1].push_back(u-1);
            }
        }
        scanf("%d", &x);
        while(x--)
        {
            scanf("%d", &u);
            memset(visited, 0, sizeof visited);
            bfs(u-1, v, visited, n);
        }
    }
    return 0;
}
