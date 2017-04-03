#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j);

char ch[205][205];

int vist[205][205];

int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

int cnt, xcnt;

vector < pair <int, int> > p;

void dfs1(int i, int j, int cur)
{
    vist[i][j] = 1;
    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if(ch[u][v] == 'X' && !vist[u][v])
        {
            dfs1(u, v, cur);
        }
        if(!cur && ch[u][v] == '*' && !vist[u][v])
        {
            p.push_back({u, v});
        }
    }
}

void dfs(int i, int j)
{
    vist[i][j] = 1;
    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if(ch[u][v] == '*' && !vist[u][v])
        {
            dfs(u, v);
        }
        if(ch[u][v] == 'X' && !vist[u][v])
        {
            cnt++;
            dfs1(u, v, 0);
        }
    }
    for(int i=0; i<p.size(); i++)
    {
        int u, v;
        u = p[i].first;
        v = p[i].second;
        if(!vist[u][v])
        {
            dfs(u, v);
        }
    }
}

int main()
{
    int i, j, t=1, n, m;
    while(scanf("%d %d", &m, &n), n && m)
    {
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
        vector <int> v;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin >> ch[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(ch[i][j] == '*' && !vist[i][j])
                {
                    p.clear();
                    cnt = 0;
                    dfs(i, j);
                    v.push_back(cnt);
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(ch[i][j] == 'X' && !vist[i][j])
                {
                    dfs1(i, j, 1);
                    v.push_back(1);
                }
            }
        }
        sort(v.begin(), v.end());
        j = v.size();
        printf("Throw %d\n", t++);
        for(i=0; i<j; i++)
        {
            printf("%d", v[i]);
            if(i == j-1)
                printf("\n\n");
            else
                printf(" ");
        }
    }
    return 0;
}
