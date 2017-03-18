#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int vist[105][105];
char ch[105][105];

int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

void DFS(int i, int j)
{
    vist[i][j] = 1;
    for(int k = 0; k < 4; k++)
    {
        if(ch[i+x[k]][j+y[k]] == ch[i][j] && !vist[i+x[k]][j+y[k]])
        {
            DFS(i+x[k], j+y[k]);
        }
    }
}

int main()
{
    int n, m, c, i, j, t, tc=1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        int c[26];
        for(i=0; i<26; i++)
            c[i] = i;
        int fq[26] = {0};
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
                if(!vist[i][j])
                {
                    DFS(i, j);
                    fq[ch[i][j]-'a']++;
                }
            }
        }
        for(i=0; i<25; i++)
        {
            for(j=0; j<25-i; j++)
            {
                if(fq[c[j]]>fq[c[j+1]])
                {
                    swap(c[j], c[j+1]);
                }
                if(fq[c[j]] == fq[c[j+1]] && c[j] < c[j+1])
                {
                    swap(c[j], c[j+1]);
                }
            }
        }
        printf("World #%d\n", tc++);
        for(i=25; i>=0; i--)
        {
            if(fq[c[i]] != 0)
                printf("%c: %d\n", c[i]+'a', fq[c[i]]);
        }
    }
    return 0;
}
