#include <bits/stdc++.h>
using namespace std;

int ar[205][205], mp[205];

int vist[205][205];

int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

int cnt = 0;

void dfs(int i, int j, int cur)
{
    vist[i][j] = 1;
    cnt++;
    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if(ar[u][v] == cur && !vist[u][v])
        {
            dfs(u, v, cur);
        }
    }
}

int main()
{
    int i, j, t=1, n, u, v;
    while(scanf("%d", &n) == 1)
    {
        if(!n)
            break;
        memset(ar, -1, sizeof ar);
        memset(vist, 0, sizeof vist);
        int flg=0;
        string s;
        cin.ignore();
        for(i=1; i<=n-1; i++)
        {
            getline(cin, s);
            stringstream ss;
            ss << s;
            while(ss >> u >> v)
            {
                ar[u][v] = i;
            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(ar[i][j] == -1)
                {
                    ar[i][j] = n;
                }
            }
        }

        for(i=1; i<=n; i++)
        {
            if(flg)
                break;
            for(j=1; j<=n; j++)
            {
                if(flg)
                    break;
                if( !vist[i][j] )
                {
                    cnt = 0;
                    dfs(i, j, ar[i][j]);
                    if(cnt != n)
                    {
                        flg = 1;
                    }
                }
            }
        }

        printf("%s\n", !flg ? "good" : "wrong");
    }
    return 0;
}
