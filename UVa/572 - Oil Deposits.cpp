#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int vist[105][105];
char ch[105][105];

int x[] = {0, 0, 1, -1, -1, -1, 1, 1};
int y[] = {1, -1, 0, 0, 1, -1, 1, -1};

void DFS(int i, int j)
{
    if(vist[i][j])
    {
        return;
    }
    vist[i][j] = 1;
    for(int k = 0; k < 8; k++)
    {
        if(ch[i+x[k]][j+y[k]] == '@' && !vist[i+x[k]][j+y[k]])
        {
            DFS(i+x[k], j+y[k]);
        }
    }
}

int main()
{
    int n, m, c, i, j;
    while(scanf("%d %d", &n, &m), m)
    {
        c = 0;
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
                if(ch[i][j] == '@' && !vist[i][j])
                {
                    DFS(i, j);
                    c++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
