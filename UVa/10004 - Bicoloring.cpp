#include <bits/stdc++.h>
using namespace std;

vector <int> v[205];

int bfs(int n)
{
    queue <int> q;

    int i, x, y;
    int c[210], ar[210];

    memset(c, 0, sizeof(c));
    memset(ar, 0, sizeof(ar));
    q.push(0);

    while(!q.empty())
    {
        x = q.front();
        q.pop();
        for(i=0; i<v[x].size(); i++)
        {
            y = v[x][i];
            if(ar[y] == 0)
            {
                c[y] = !c[x];
                ar[y] = 1;
                q.push(y);
            }
            else if(c[x] == c[y])
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int n, l, a, b, i;

    while(cin >> n && n != 0)
    {
        cin >> l;
        for(i=0; i<n; i++)
        {
            v[i].clear();
        }
        for(i=0; i<l; i++)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        if(bfs(n) == 1)
        {
            printf("NOT ");
        }
        printf("BICOLORABLE.\n");
    }

    return 0;
}
