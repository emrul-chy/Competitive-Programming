#include <bits/stdc++.h>
using namespace std;

int visited[50010];
int v[50010];
int ar[50010];

int dfs(int n)
{
    visited[n] = 1;
    int i, cnt = 0;
    if(v[n] != -1 && visited[v[n]] == 0)
    {
        cnt += 1 + dfs(v[n]);
    }
    visited[n] = 0;
    return ar[n] = cnt;
}

int main()
{
    int T, j = 1;
    scanf("%d", &T);
    while(T--)
    {
        int n, x, y, i, mx=0, ans;
        memset(v, -1, sizeof v);
        memset(visited, 0, sizeof visited);
        memset(ar, -1, sizeof ar);
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &x);
            scanf("%d", &y);
            v[x] = y;
        }
        for(i=1; i<=n; i++)
        {
            if(ar[i] == -1)
            {
                dfs(i);
            }
            if(ar[i] > mx)
            {
                mx = ar[i];
                ans = i;
            }
        }
        printf("Case %d: %d\n", j++, ans);
    }
    return 0;
}
