#include <bits/stdc++.h>
using namespace std;
map<int, int>mp;
int main()
{
    int t, i, j, k,y, x,f1, f2, nb;
    char s[10][20], h[3];
    cin >> t;
    for(i=1; i<=t; i++)
    {
        for(j=0; j<5; j++)
        {
            cin >> s[j];
        }
        f1=0,f2=0;
        for(j=0; j<5; j++)
        {
            for(k=0; k<5; k++)
            {
                if(s[j][k] == '>')
                {
                    f1 = 1;
                    x = j;
                    y = k;
                    break;
                }
                if(s[j][k] == '<')
                {
                    f2 = 1;
                    x = j;
                    y = k;
                    break;
                }
            }
        }
        printf("Case %d: ", i);
        int flg = 0;
        if(f1 == 1)
        {
            for(j=0; j<5; j++)
            {
                if(s[x][j] == '|' && j < y)
                {
                    flg = 1;
                    break;
                }
            }

            if(flg == 1)
            {
                printf("No Ball\n");
            }
            else
            {
                printf("Thik Ball\n");
            }
        }

        else if(f2 == 1)
        {
            flg =0;
            for(j=0; j<5; j++)
            {
                if(s[x][j] == '|' && j > y)
                {
                    flg = 1;
                    break;
                }
            }

            if(flg == 1)
            {
                printf("No Ball\n");
            }
            else
            {
                printf("Thik Ball\n");
            }
        }
    }
}
