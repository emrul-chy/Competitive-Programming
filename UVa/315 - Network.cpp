#include <bits/stdc++.h>
using namespace std;

int f, cnt;
int vist[101];
vector <int> v[101];

void dfs(int x, int cur)
{
    vist[x]=1;
    if(f)
        cnt++;
    f=1;
    for(int i=0; i<v[x].size(); i++)
    {
        int y = v[x][i];
        if(!vist[y] && y != cur)
        {
            dfs(y, cur);
        }
    }
}


int main()
{
    int n, i, j, x, y;
    while(scanf("%d", &n), n)
    {
        for(i=0; i<101; i++)
        {
            v[i].clear();
        }
        int ans=0;
        while(scanf("%d", &x), x)
        {
            while(getchar() != '\n')
            {
                scanf("%d", &y);
                v[x].push_back(y);
                v[y].push_back(x);
            }
        }
        for(i=1; i<=n; i++)
        {
            memset(vist, 0, sizeof vist);
            cnt = 0;
            for(j=1; j<=n; j++)
            {
                if(j != i && !vist[j])
                {
                    f=0;
                    dfs(j, i);
                }
            }
            if(cnt != n-2)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
