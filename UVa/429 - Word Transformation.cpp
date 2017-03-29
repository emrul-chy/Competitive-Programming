#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MX = 205;

map <string, int> vist;
char mp[205][11];
int n;

int compare(char a[], char b[])
{
    int cnt=0, i, l = strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i] != b[i])
            cnt++;
        if(cnt > 1)
            return 1;
    }
    if(cnt == 1)
        return 0;
    return 1;
}

void bfs(char src[])
{
    vist.clear();
    int i;
    char x[11], y[11];
    queue <string> q;
    vist[src] = 1;
    q.push(src);
    while( !q.empty() )
    {
        strcpy(x, q.front().c_str());
        q.pop();
        for(i=0; i<n; i++)
        {
            strcpy(y, mp[i]);
            if( (compare(x, y) == 0) && !vist[y])
            {
                vist[y] = vist[x] + 1;
                q.push(y);
            }
        }
    }
}

int main()
{
    char a[11], b[11], s[25];
    int c, t, i, f=0,j, k, l;
    scanf("%d",  &t);
    cin.ignore();
    while(t--)
    {
        n=0;
        while(scanf("%s", mp[n]))
        {
            if( strcmp(mp[n], "*") == 0)
                break;
            n++;
        }
        cin.ignore();
        if(f)
            puts("");
        f=1;
        while(gets(s) && strlen(s) > 0)
        {
            int flg = 0;
            int l1=0, l2=0;
            l = strlen(s);
            for(i=0; i<l; i++)
            {
                if(s[i] == ' ')
                {
                    flg = 1;
                    continue;
                }
                if(!flg)
                    a[l1++] = s[i];
                else
                    b[l2++] = s[i];
            }
            a[l1] = '\0';
            b[l2] = '\0';
            bfs(a);
            printf("%s %s %d\n", a, b, vist[b]-1);
        }
    }
    return 0;
}
