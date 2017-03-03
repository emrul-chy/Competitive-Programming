#include <bits/stdc++.h>
using namespace std;

#define MX 2505

int fq[MX], ans, mx;
int ar[MX], c[MX];
vector <int> v[MX];

void bfs(int src)
{
    int x, y, i;
    queue <int> q;

    memset(ar, 0, sizeof ar);
    memset(c, -1, sizeof c);

    q.push(src);
    c[src] = 0;

    while(!q.empty())
    {
        x = q.front();
        q.pop();

        for(i=0; i<v[x].size(); i++)
        {
            y = v[x][i];
            if(ar[y] == 0 && c[y] == -1)
            {
                ar[y] = 1;
                c[y] = c[x] + 1;
                q.push(y);
            }
        }
    }
}

int main()
{
    int n, i, m, j, t, x;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> x;
        if(!v[x].size())
        {
            cout << 0 << endl;
            continue;
        }
        bfs(x);
        ans = 0, mx = 0;
        memset(fq, 0,  sizeof fq);
        sort(c, c+n);
        for(j=0; j<n; j++)
        {
            fq[c[j]]++;
            if(fq[c[j]] > mx && c[j] != -1 && c[j] != 0)
            {
                mx = fq[c[j]];
                ans = c[j];
            }
        }
        cout << mx << " " << ans << endl;
    }
}
