#include <bits/stdc++.h>
using namespace std;

int vist[26];
vector <int> v[26];

void dfs(int x)
{
    vist[x] = 1;
    for(int i=0; i<v[x].size(); i++)
    {
        if(!vist[v[x][i]])
        {
            dfs(v[x][i]);
        }
    }
}

int main()
{
    int t, f=0;
    scanf("%d", &t);
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        int i, n, x, y, cnt=0;
        string str;
        if(f)
            puts("");
        f=1;
        memset(vist, 0, sizeof vist);
        for(i=0; i<26; i++)
        {
            v[i].clear();
        }
        getline(cin, str);
        n = str[0] - 'A';
        while(getline(cin, str) && str.size() > 1)
        {
            x = str[0] - 'A';
            y = str[1] - 'A';
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(i=0; i<=n; i++)
        {
            if(!vist[i])
            {
                dfs(i);
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
