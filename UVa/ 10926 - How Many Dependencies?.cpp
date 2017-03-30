#include <bits/stdc++.h>
using namespace std;

vector <int> v[105];

int mp[105];
int vist[105];

void dfs(int src, int cur)
{
    vist[src] = 1;
    mp[cur]++;
    for(int i=0; i<v[src].size(); i++)
    {
        if( !vist[ v[src][i] ])
        {
            dfs(v[src][i], cur);
        }
    }
}

int main()
{
    int n, m, x;
    while(scanf("%d", &n), n)
    {
        int ans, mx = 0;
        for(int i=0; i<105; i++)
        {
            v[i].clear();
            mp[i] = 0;
        }
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &m);
            while(m--)
            {
                scanf("%d", &x);
                v[i].push_back(x);
            }
        }
        for(int i=1; i<=n; i++)
        {
            memset(vist, 0, sizeof vist);
            dfs(i, i);
            if(mp[i] > mx)
            {
                mx = mp[i];
                ans = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
