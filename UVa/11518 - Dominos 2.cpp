#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector <int> v[], int visited[])
{
    visited[src] = 1;
    int i, x;
    for(i=0; i<v[src].size(); i++)
    {
        x = v[src][i];
        if(!visited[x])
        {
            dfs(x, v, visited);
        }
    }
}

int main()
{
    int n, m, l, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &n, &m, &l);
        vector <int> v[n+5];
        int visited[n+5];
        memset(visited, 0, sizeof visited);
        int i, x, y, u, cnt=0;
        while(m--)
        {
            scanf("%d %d", &x, &y);
            v[x-1].push_back(y-1);
        }
        while(l--)
        {
            scanf("%d", &u);
            dfs(u-1, v, visited);
        }
        for(i=0; i<n; i++)
        {
            if(visited[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
