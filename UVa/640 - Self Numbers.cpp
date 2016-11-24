#include <bits/stdc++.h>
using namespace std;

#define MX 1000000
int s[MX+1];
int main()
{
    memset(s, 0, sizeof(s));
    int i, j, dg;
    for(i = 1; i <= MX; i++)
    {
        j = i, dg = 0;
        while(j != 0)
        {
            dg += j % 10;
            j /= 10;
        }
        if(dg+i <= MX)
        {
            s[dg+i] = 1;
        }
    }
    for(i = 1; i <= MX; i++)
    {
        if(s[i] != 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
