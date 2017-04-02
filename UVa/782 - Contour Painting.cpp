#include <bits/stdc++.h>
using namespace std;

char ch[50][100];

int vist[50][100];

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};

void dfs(int i, int j, int cur)
{
    if(!cur)
    {
        vist[i][j] = 1;
        ch[i][j] = '*';
    }
    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if(cur == 0 && ch[u][v] == ' ')
        {
            dfs(u, v, 0);
        }
        if(cur == 1 && ch[u][v] == '*')
        {
            ch[u][v] = '#';
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    cin.ignore();
    while(t--)
    {
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
        char s[100], u;
        int n=0, f, mx=0, type=0, m, i, j, sx=-1, sy=-1;

        while(gets(s))
        {
            m = strlen(s);
            mx = max(mx, m);
            int flg=0, f=0;
            if(sx == -1 && sy == -1)
            {
                for(i=0; i<m; i++)
                {
                    if(s[i] == '*')
                    {
                        sx = n;
                        sy = i;
                        break;
                    }
                }
            }
            strcpy(ch[n], s);
            n++;
            if(s[0] == '_' && m > 0)
                break;
        }
        mx += 5;
        for(i=0; i<n-1; i++)
        {
            m = strlen(ch[i]);
            for(j=m; j<mx; j++)
            {
                ch[i][j] = ' ';
            }
            ch[i][mx] = '\0';
        }
        dfs(sx, sy, 0);
        for(i=0; i<n-1; i++)
        {
            m = strlen(ch[i]);
            for(j=0; j<m; j++)
            {
                if(ch[i][j] != '#' && ch[i][j] != '*' && ch[i][j] != ' ')
                {
                    dfs(i, j, 1);
                }
            }
        }
        for(i=0; i<n-1; i++)
        {
            m = strlen(ch[i]);
            for(j=0; j<m; j++)
            {
                if(ch[i][j] == '*')
                {
                    ch[i][j] = ' ';
                }
            }
            while(ch[i][m-1] == ' ')
            {
                ch[i][m-1] = '\0';
                m--;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%s\n", ch[i]);
        }
    }
    return 0;
}
