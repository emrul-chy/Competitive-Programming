#include <bits/stdc++.h>
using namespace std;

char ch[50][100];

int vist[50][100];

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};

void dfs(int i, int j, char src)
{
    vist[i][j] = 1;
    ch[i][j] = src;

    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];

        if( ch[u][v] == ' ' && !vist[u][v])
        {
            dfs(u, v, src);
        }
    }
}

int main()
{
    int t;
    string str;
    while(getline(cin, str))
    {
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
        strcpy(ch[0], str.c_str());
        char s[100], u;
        int n=1, st=0, m, i, j, sx, sy;
        m = str.size();
        for(i=0; i<m; i++)
        {
            if(str[i] != ' ')
            {
                u = str[i];
                break;
            }
        }
        while(gets(s))
        {
            m = strlen(s);
            int f=0;
            for(i=0; i<m; i++)
            {
                if(s[i] != '_')
                {
                    f = 1;
                    break;
                }
            }
            strcpy(ch[n], s);
            n++;
            if(!f)
                break;
        }
        for(i=0; i<n-1; i++)
        {
            m = strlen(ch[i]);
            for(j=0; j<m; j++)
            {
                char x = ch[i][j];
                if(!vist[i][j] && x != u && x != ' ' && x != '_')
                {
                    dfs(i, j, x);
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%s\n", ch[i]);
        }
    }
    return 0;
}
