#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MX = 205;

int col[MX], f;

vector <int> v[MX];

void dfs(int src, int cur)
{
    if(f)
        return;
    col[src] = cur;
    int i, x;
    for(i=0; i<v[src].size(); i++)
    {
        x = v[src][i];
        if( col[x] == cur )
        {
            f = 1;
            return;
        }
        if( col[x] == -1 )
        {
            col[x] = !cur;
            dfs(x, col[x]);
        }

    }
}

void init()
{
    f=0;
    memset(col, -1, sizeof col);
    for(int i=0; i<MX; i++)
    {
        v[i].clear();
    }
}

int main()
{
    int n, m, x, y, i;
    while(cin >> n, n)
    {
        init();
        cin >> m;
        while(m--)
        {
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(i=0; i<n; i++)
        {
            if( col[i] == -1 )
            {
                dfs(i, 0);
            }
        }
        if(f)
            cout << "NOT ";
        cout << "BICOLORABLE.\n";
    }
    return 0;
}
