#include <bits/stdc++.h>
using namespace std;
int main()
{
    int strt[40000], dis, i, j, k, r, t, d, mini, temp, loc;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&r);
        for(j=1; j<=r; j++)
        {
            scanf("%d",&strt[j]);
        }
        sort(strt,strt+r);
        for(j=1; j<=r; j++)
        {
            dis=0;
            for(k=1; k<=r; k++)
            {
                dis+=abs(strt[k]-strt[j]);
            }
            if(j==1)mini=dis;
            if(dis<mini)mini=dis;
        }
        printf("%d\n",mini);
    }
    return 0;
}
