#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int ar[5], vist[5], flg;

int read()
{
    memset(vist, 0, sizeof vist);
    flg = 0;
    int f=0, i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
        if(!ar[i])
            f=1;
    }
    return (!f) ? 1 : 0;
}

void dfs(int c, int sum)
{
    if(flg)
    {
        return;
    }
    if(c == 5 && sum == 23)
    {
        flg = 1;
        return;
    }
    for(int i=0; i<5;  i++)
    {
        if(!vist[i])
        {
            vist[i] = 1;
            dfs(c+1, sum * ar[i]);
            dfs(c+1, sum + ar[i]);
            dfs(c+1, sum - ar[i]);
            vist[i] = 0;
        }
    }
}

int main()
{
    while(read())
    {
        for(int i=0; i<5; i++)
        {
            if(flg)
                break;
            vist[i] = 1;
            dfs(1, ar[i]);
            vist[i] = 0;
        }
        printf( ( flg ) ? "Possible\n" : "Impossible\n" );
    }
    return 0;
}
