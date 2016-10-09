#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, g, l;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &g, &l);
        if(l % g == 0)
        {
            printf("%d %d\n", g, l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
