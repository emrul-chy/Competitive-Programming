#include <bits/stdc++.h>
using namespace std;

int vist[30][30], cnt, c;
char ch[30][30];

int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

int DFS(int i, int j, char q)
{
    vist[i][j] = 1;
    cnt++;
    for(int k = 0; k < 4; k++)
    {
        if(ch[i+x[k]][j+y[k]] == q && !vist[i+x[k]][j+y[k]])
        {
            DFS(i+x[k], j+y[k], q);
        }
    }
}

int main()
{
    int n, a=0, b=0, m, c, tc=1, i, j;
    scanf("%d %d", &n, &m);
    memset(vist, 0, sizeof vist);
    for(i=1; i<=m; i++)
    {
        getchar();
        for(j=1; j<=n; j++)
        {
            scanf("%c", &ch[i][j]);
        }
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(ch[i][j] == '*' && !vist[i][j])
            {
                cnt = 0;
                DFS(i, j, '*');
                a = max(a, cnt);
            }
            else if(ch[i][j] == '.' && !vist[i][j])
            {
                cnt = 0;
                DFS(i, j, '.');
                b = max(b, cnt);
            }
        }
    }
    if(a == b)
        printf("NOBODY LOSES.\n");
    if(a > b)
        printf("TULTUL WINS THE ROUND.\n");
    if(b > a)
        printf("TASFIA WINS THE ROUND.\n");
    return 0;
}
