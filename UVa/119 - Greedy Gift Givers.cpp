#include <bits/stdc++.h>
using namespace std;
int main()
{
    char nm[100];
    static struct gift
    {
        char name[100];
        int tk = 0;
    } v[10000];
    int n, i, j, x=0, k, t, s;
    while(cin >> n)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            cin >> v[i].name;
            v[i].tk = 0;
        }
        for(i=0; i<n; i++)
        {
            cin >> nm;
            cin >> t >> s;
            for(j=0; j<n; j++)
            {
                if(strcmp(v[j].name,  nm)==0)
                {
                    int ss = t /(double)s;
                    ss *= s;
                    v[j].tk -= ss;
                    break;
                }
            }
            for(j=0; j<s; j++)
            {
                cin >> nm;
                for(k=0; k<n; k++)
                {
                    if(strcmp(v[k].name, nm)==0)
                    {
                        v[k].tk += t/s;
                        break;
                    }
                }
            }
        }
        if(x != 0)
        {
            printf("\n");
        }
        x =1;
        for(i=0; i<n; i++)
        {
            cout << v[i].name << " " << v[i].tk << "\n";
        }
    }
    return 0;
}
