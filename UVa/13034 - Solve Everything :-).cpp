#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j = 1, x, T, i, flg;
    scanf("%d", &T);
    while(T--)
    {
        flg = 0;
        for(i=1; i<=13; i++)
        {
            scanf("%d", &x);
            if(x == 0)
            {
                flg = 1;
            }
        }
        printf("Set #%d: ", j++);
        if(flg)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
