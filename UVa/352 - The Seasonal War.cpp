#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int vist[30][30];
char ch[30][30];

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
        if(ch[i+x[k]][j+y[k]] == '1' && !vist[i+x[k]][j+y[k]])
        {
            DFS(i+x[k], j+y[k]);
        }
    }
}

int main()
{
    int n, c, tc=1, i, j;
    while(cin >> n)
    {
        c = 0;
        memset(vist, 0, sizeof vist);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin >> ch[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(ch[i][j] == '1' && !vist[i][j])
                {
                    DFS(i, j);
                    c++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", tc++, c);
    }
    return 0;
}
