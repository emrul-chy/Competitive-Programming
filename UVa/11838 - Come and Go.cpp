#include <bits/stdc++.h>
using namespace std;

int cnt;

void dfs(int src, vector <int> v[], int visited[])
{
    cnt++;
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
    int n, m, t, p;
    while(scanf("%d %d", &n, &m))
    {
        if(!n && !m)
            break;
        vector <int> v[n+5];
        int visited[n+5];
        int i, x, y, u, flg=0;
        while(m--)
        {
            scanf("%d %d %d", &x, &y, &p);
            v[x-1].push_back(y-1);
            if(p == 2)
                v[y-1].push_back(x-1);
        }
        for(i=0; i<n; i++)
        {
            cnt = 0;
            memset(visited, 0, sizeof visited);
            dfs(i, v, visited);
            if(cnt != n)
            {
                flg = 1;
            }
        }
        printf("%d\n", (!flg) ? 1 : 0);
    }
    return 0;
}
