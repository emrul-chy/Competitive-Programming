#include <bits/stdc++.h>
using namespace std;

#define MX 505

int p[MX], a[MX];
int ar[MX], c[MX];
vector <int> v[MX];

void path(int x, int y)
{
    if(x == y)
    {
        printf("%d", y);
        return;
    }
    path(p[x], y);
    printf(" %d", x);
}

void bfs(int src)
{
    int x, y, i;
    queue <int> q;

    memset(ar, 0, sizeof ar);
    memset(c, -1, sizeof c);

    q.push(src);
    c[src] = 0;
    ar[src] = 1;

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
                p[y] = x;
            }
        }
    }
}

int main()
{
    int i, j, t, x, y, n;
    while(cin >> n)
    {
        getchar();
        memset(p, 0, sizeof p);
        for(i=0; i<=305; i++)
        {
            v[i].clear();
        }
        string s;
        for(i=0; i<n; i++)
        {
            t = 0;
            getline(cin, s);
            for(j=0; j<s.size(); j++)
            {
                int sum = 0;
                while(s[j] >= '0' && s[j] <= '9')
                {
                    sum = sum * 10 + (s[j]-'0');
                    j++;
                }
                a[t++] = sum;
            }
            for(j=1; j<t; j++)
            {
                v[a[0]].push_back(a[j]);
            }
        }
        cin >> t;
        printf("-----\n");
        while(t--)
        {
            cin >> x >> y;
            bfs(x);
            if(c[y] == -1)
            {
                printf("connection impossible\n");
            }
            else
            {
                path(y, x);
                printf("\n");
            }
        }
    }
    return 0;
}
