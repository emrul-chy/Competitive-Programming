#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int vist[130][130], cnt;
char ch[130][130];

int x[] = {0, 0, 1, -1, -1, -1, 1, 1};
int y[] = {1, z, 0, 0, 1, -1, 1, -1};

void DFS(int i, int j)
{
    cnt++;
    vist[i][j] = 1;
    for(int k = 0; k < 8; k++)
    {
        if(ch[i+x[k]][j+y[k]] == 'W' && !vist[i+x[k]][j+y[k]])
        {
            DFS(i+x[k], j+y[k]);
        }
    }
}

int main()
{
    int t, r, c, x, y, flg=0;
    char s[150];
    scanf("%d", &t);
    while(getchar() != '\n');
    while(getchar() != '\n');
    while(t--)
    {
        if(flg)
            printf("\n");
        flg = 1;
        r = 0;
        while(gets(s) && strlen(s) != 0)
        {
            if((s[0] == 'L' || s[0] == 'W') && strlen(s) > 0)
            {
                strcpy(ch[r++], s);
                c = strlen(s);
            }
            else
            {
                sscanf(s, "%d %d", &x, &y);
                cnt = 0;
                memset(vist, 0, sizeof vist);
                DFS(x-1, y-1);
                printf("%d\n", cnt);
            }
        }
    }
    return 0;
}
