#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6], b[6], i, flg;
    while(scanf("%d", &b[1]) != EOF)
    {
        flg = 0;
        for(i=2; i<=5; i++)
        {
            scanf("%d", &b[i]);
        }
        for(i=1; i<=5; i++)
        {
            scanf("%d", &a[i]);
            b[i] += a[i];
            if(b[i] != 1)
            {
                flg = 1;
            }
        }
        if(flg)
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }
    }
    return 0;
}
