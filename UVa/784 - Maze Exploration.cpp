#include <bits/stdc++.h>
using namespace std;

char ch[50][100];

int vist[50][100];

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};

void dfs(int i, int j)
{
    vist[i][j] = 1;
    ch[i][j] = '#';

    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];

        if( ch[u][v] == ' ' && !vist[u][v])
        {
            dfs(u, v);
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
        char s[100];
        int n=0, m, i, j, sx, sy;
        while(gets(s))
        {
            m = strlen(s);
            int f=0;
            for(i=0; i<m; i++)
            {
                if(s[i] != '_')
                {
                    f = 1;
                }
                if(s[i] == '*'){

                    sx = n, sy = i;
                }
            }
            strcpy(ch[n], s);
            n++;
            if(!f)
                break;
        }
        dfs(sx, sy);
        for(i=0; i<n; i++)
        {
            printf("%s\n", ch[i]);
        }
    }
    return 0;
}
