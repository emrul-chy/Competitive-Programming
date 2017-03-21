#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int x[3] = {-1, 0, 0};
int y[3] = {0, 1, -1};

vector < pair<int, int> > ans;

char ch[10][10];
int vist[10][10];

string s = "IEHOVA#";
string str[3] = {"forth", "right", "left"};

int n, m, i, j, t, a, b, p, q, u, v, flg;

void dfs(int l, int r)
{
    if(l == p && r == q)
    {
        flg = 1;
        ans.push_back(make_pair(l, r));
        return;
    }
    vist[l][r] = 1;
    for(i=0; i<3; i++)
    {
        u = l + x[i];
        v = r + y[i];
        if( !vist[u][v] )
        {
            for(j=0; j<7; j++)
            {
                if( ch[u][v] == s[j] )
                {
                    dfs(u, v);
                    if( flg )
                    {
                        ans.push_back(make_pair(l, r));
                        return;
                    }
                }
            }
        }
    }
}

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        memset(ch, '\0', sizeof ch);
        memset(vist, 0, sizeof vist);
        ans.clear();
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin >> ch[i][j];
                if(ch[i][j] == '@')
                    a = i, b = j;
                if(ch[i][j] == '#')
                    p = i, q = j;
            }
        }
        flg = 0;
        dfs(a, b);
        for(i=ans.size()-1; i>=1; i--)
        {
            for(j = 0; j < 3; j++)
            {
                if(ans[i-1].X == ans[i].X + x[j] && ans[i-1].Y == ans[i].Y + y[j])
                {
                    cout << str[j];
                }
            }
            if(i == 1)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}
