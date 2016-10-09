#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j, t, i, c, a[10], b[4], k, s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        s = 0;
        k = 0;
        for(j=0; j<7; j++)
        {
            cin>>a[j];
            if(j < 4)
            {
                s += a[j];
            }
            else
            {
                b[k++] = a[j];
            }
        }
        printf("Case %d:", i);
        sort(b, b+k);
        c = (b[k-1] + b[k-2]) / 2;
        s += c;
        if(s >= 90 && s<=100)
        {
            printf(" A\n");
        }
        else if(s >= 80)
        {
            printf(" B\n");
        }
        else if(s >= 70)
        {
            printf(" C\n");
        }
        else if(s >= 60)
        {
            printf(" D\n");
        }
        else if(s < 60)
        {
            printf(" F\n");
        }
    }
    return 0;
}
