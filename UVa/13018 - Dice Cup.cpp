#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, flg=0, i;
    while(scanf("%d %d", &x, &y)==2)
    {
        if(flg)
            printf("\n");
        flg = 1;
        if(x > y)
            swap(x, y);
        for(i=x+1; i<=y+1; i++)
            printf("%d\n", i);
    }
    return 0;
}
