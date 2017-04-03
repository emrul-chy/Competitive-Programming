#include <bits/stdc++.h>
using namespace std;

int vist[205][205];
char ch[205][205];

int x[] = {-1, -1, 0, 0, 1, 1};
int y[] = {-1, 0, -1, 1, 0, 1};

int isB, isW, n;

void DFS(int i, int j, char cur)
{
    vist[i][j] = 1;
    if(isB || isW)
        return;
    if(cur == 'b' && i == n)
        isB = 1;
    if(cur == 'w' && j == n)
        isW = 1;
    for(int k = 0; k < 6; k++)
    {
        if(ch[i+x[k]][j+y[k]] == cur && !vist[i+x[k]][j+y[k]])
        {
            if(isB || isW)
                return;
            DFS(i+x[k], j+y[k], cur);
        }
    }
}

int main()
{
    int t=1, i, j;
    while(cin >> n, n)
    {
        memset(vist, 0, sizeof vist);
        memset(ch, '\0', sizeof ch);
        isB = isW = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin >> ch[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            if(isB || isW)
                break;
            if(!vist[i][1] && ch[i][1] == 'w')
            {
                DFS(i, 1, 'w');
            }
            if(!vist[1][i] && ch[1][i] == 'b')
            {
                DFS(1, i, 'b');
            }
        }
        printf("%d %c\n", t++, isB ? 'B' : 'W');
    }
    return 0;
}
