#include <bits/stdc++.h>
using namespace std;

int visited[50005], cnt, x;
vector <int> v[50005];

void dfs(int n)
{
    visited[n] = 1;
    int i, j, c = 0, l = v[n].size();
    for(i=0; i<l; i++)
    {
        x = v[n][i];
        if(!visited[x])
        {
            dfs(x);
        }
    }
    return;
}

int main()
{
    int n, m, j, i, t=1, a, b;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(!n && !m)
        {
            break;
        }
        cnt = 0;
        for(i=0; i<50005; i++)
        {
            v[i].clear();
        }
        memset(visited, 0, sizeof visited);
        while(m--)
        {
            scanf("%d %d", &a, &b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(i=1; i<=n; i++)
        {
            if(!visited[i])
            {
                cnt++;
                dfs(i);
            }
        }
        printf("Case %d: %d\n", t++, cnt);
    }
    return 0;
}
