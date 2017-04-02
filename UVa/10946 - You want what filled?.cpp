#include <bits/stdc++.h>
using namespace std;

char ch[50][100];

int vist[50][100], cnt;

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};

void dfs(int i, int j, char cur)
{
    vist[i][j] = 1;
    cnt++;
    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if( ch[u][v] == cur && !vist[u][v])
        {
            dfs(u, v, cur);
        }
    }
}

int main()
{
    int n, m, t=1, i, j;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(!n && !m)
            break;
        vector < pair<int, char> > vec;
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
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
                if(ch[i][j] != '.' && !vist[i][j])
                {
                    cnt = 0;
                    dfs(i, j, ch[i][j]);
                    vec.push_back(make_pair(cnt, 'Z' - ch[i][j]));
                }
            }
        }
        printf("Problem %d:\n", t++);
        sort(vec.rbegin(), vec.rend());
        for(i=0; i<vec.size(); i++)
        {
            cout << (char)('Z' - vec[i].second) << " " << vec[i].first << endl;
        }
    }
    return 0;
}
