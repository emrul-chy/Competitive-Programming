#include <bits/stdc++.h>
using namespace std;

int visited[5005], cnt, src, flg = 0;

void dfs(int n, vector <int> v[])
{
    cnt++;
    visited[n] = 1;
    int i, j, c = 0, l = v[n].size();
    for(i=0; i<l; i++)
    {
        if(!visited[v[n][i]])
        {
            dfs(v[n][i], v);
        }
    }
    return;
}

int main()
{
    int n, i, m, mx, j, t, x;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(!n && !m)
            break;
        map <string, int> mp;
        char s[100], s1[100];
        vector <int> v[5005];
        mx = 0;
        i=1;
        for(j=0; j<n; j++)
        {
            scanf("%s", s);
            if(!mp[s])
            {
                mp[s] = i;
                i++;
            }
        }
        for(i=0; i<m; i++)
        {
            scanf("%s %s", s, s1);
            v[mp[s1]].push_back(mp[s]);
            v[mp[s]].push_back(mp[s1]);
        }
        for(i=1; i<=n; i++)
        {
            cnt = 0;
            memset(visited, 0, sizeof visited);
            dfs(i, v);
            mx = max(mx, cnt);
        }
        printf("%d\n", mx);
    }
    return 0;
}
