#include <bits/stdc++.h>
using namespace std;

char ch[10][10];
int vist[10][10];

int isB, isW, cnt;

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};

void dfs(int i, int j)
{
    if( i < 1 || j < 1 || i > 9 || j > 9 )
        return;
    cnt++;
    vist[i][j] = 1;

    for(int k = 0; k < 4; k++)
    {
        int u = i + x[k];
        int v = j + y[k];
        if(u < 1 || u > 9 || v < 1 || v > 9)
            continue;

        if( ch[u][v] == '.' && !vist[u][v])
        {
            dfs(u, v);
        }

        if( ch[u][v] == 'O' )
            isW = 1;
        if( ch[u][v] == 'X' )
            isB = 1;
    }
}

int main()
{
    int n, i, j;
    scanf("%d", &n);
    while(n--)
    {
        int cntB=0, cntW=0;
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
        for(i=1; i<=9; i++)
        {
            for(j=1; j<=9; j++)
            {
                cin >> ch[i][j];
                if( ch[i][j] == 'O' )
                    cntW++;
                if( ch[i][j] == 'X' )
                    cntB++;
            }
        }
        for(i=1; i<=9; i++)
        {
            for(j=1; j<=9; j++)
            {
                if( ch[i][j] == '.' && !vist[i][j])
                {
                    cnt = 0, isB = 0, isW=0;
                    dfs(i, j);
                    if(isB && isW)
                        continue;
                    else if(isB)
                        cntB += cnt;
                    else if(isW)
                        cntW += cnt;
                }
            }
        }
        printf("Black %d White %d\n", cntB, cntW);
    }
    return 0;
}
