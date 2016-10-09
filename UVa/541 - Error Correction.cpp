#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, a, e, f, b, t, aa[105][105],j, s, flg, c;
    while(cin>>t)
    {
        if(t==0) break;
        flg = 0;
        e=0, f=0;
        a=0, b=0;
        for(i=1; i<=t; i++)
        {
            for(j=1; j<=t; j++)
            {
                cin>>aa[i][j];
            }
        }
        for(i=1; i<=t; i++)
        {
            s=0;
            for(j=1; j<=t; j++)
            {
                s+= aa[i][j];
            }
            if(s % 2 != 0)
            {
                a = i;
                e++;
            }
        }
        for(j=1; j<=t; j++)
        {
            s = 0;
            for(i=1; i<=t; i++)
            {
                s+=aa[i][j];
            }
            if(s % 2 != 0)
            {
                b = j;
                f++;
            }
        }
        if(e == 1 && f == 1)
        {
            printf("Change bit (%d,%d)\n", a, b);
        }
        else if(e == 0 && f == 0)
        {
            printf("OK\n");
        }
        else
        {
            printf("Corrupt\n");
        }
    }
    return 0;
}

