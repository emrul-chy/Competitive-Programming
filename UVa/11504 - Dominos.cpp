#include <bits/stdc++.h>
using namespace std;

#define MX 100005
int visited[MX];
vector <int> v[MX];
stack <int> st;

void dfs(int src)
{
    visited[src] = 1;
    int i, x;
    for(i=0; i<v[src].size(); i++)
    {
        x = v[src][i];
        if(!visited[x])
        {
            dfs(x);
        }
    }
    st.push(src);
}

int main()
{
    int n, m, l, t, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        for(i=0; i<MX; i++)
        {
            v[i].clear();
        }
        memset(visited, 0, sizeof visited);
        int x, y, u, cnt=0;
        while(m--)
        {
            scanf("%d %d", &x, &y);
            v[x-1].push_back(y-1);
        }
        for(i=0; i<n; i++)
        {
            if(!visited[i])
            {
                dfs(i);
            }
        }
        memset(visited, 0, sizeof visited);
        while(!st.empty())
        {
            if(!visited[st.top()])
            {
                dfs(st.top());
                cnt++;
            }
            st.pop();
        }
        printf("%d\n", cnt);
    }
    return 0;
}
