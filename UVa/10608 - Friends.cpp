#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int cnt;
int visited[30010];
vector <int> v[30010];

int dfs(int n)
{
    visited[n] = 1;
    int i;
    for(i=0; i<v[n].size(); i++)
    {
        int x = v[n][i];
        if(!visited[x])
        {
            cnt++;
            dfs(x);
        }
    }
}

int main()
{
    int T, j = 1;
    scanf("%d", &T);
    while(T--)
    {
        int n, x, y, m, i, mx=0, ans;
        scanf("%d %d", &n, &m);
        for(i=0; i<=n; i++)
        {
            v[i].clear();
        }
        for(i=1; i<=m; i++)
        {
            scanf("%d %d", &x, &y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(i=1; i<=n; i++)
        {
            cnt = 1;
            memset(visited, 0, sizeof visited);
            dfs(i);
            mx = max(cnt, mx);
        }
        printf("%d\n", mx);
    }
    return 0;
}
