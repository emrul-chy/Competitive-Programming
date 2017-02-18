#include <bits/stdc++.h>
using namespace std;

map <int, int> mp;
int adj[105][105];
int vist[105];

int main()
{
    int i, j, a, b, k, n, m, c;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        mp.clear();
        c = 0;
        memset(adj, 0, sizeof adj);
        memset(vist, 0, sizeof vist);
        for(i=0; i<m; i++)
        {
            cin >> a >> b;
            mp[b]++;
            adj[a][b] = 1;
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(!vist[j] && !mp[j])
                {
                    vist[j] = 1;
                    c++;
                    cout << j;
                    if( c == n )
                    {
                        cout << endl;
                    }
                    else
                    {
                        cout << " ";
                    }
                    for(k=1; k<=n; k++)
                    {
                        if(adj[j][k])
                        {
                            mp[k]--;
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
