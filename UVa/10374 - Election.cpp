#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, h, n, y, m, mx, ans;
    char x[100];
    static struct vote
    {
        char name[200], party[200];
        int c = 0;
    } v[100];
    cin >> t;
    for(h=1; h<=t; h++)
    {
        cin >> n;
        mx =0, y=0;
        while(getchar()!='\n');
        for(i=0; i<n; i++)
        {
            gets(v[i].name);
            gets(v[i].party);
            v[i].c=0;
        }
        cin >> m;
        while(getchar()!='\n');
        for(i=0; i<m; i++)
        {
            gets(x);
            for(j=0; j<n; j++)
            {
                if(strcmp(x, v[j].name)==0)
                {
                    v[j].c++;
                    if(v[j].c >= mx)
                    {
                        mx = v[j].c;
                        ans = j;
                    }
                    break;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(mx == v[i].c)
            {
                y++;
            }
        }
        if(y == 1)
        {
            cout << v[ans].party << endl;
        }
        else
        {
            printf("tie\n");
        }
        if(h != t)
        {
            printf("\n");
        }
    }
    return 0;
}
