#include <bits/stdc++.h>
using namespace std;

int mp[10];

void fac_gen()
{
    int i, j=0, s=1;
    for(i=1; i<=8; i++)
    {
        j++;
        s *= j;
        mp[i] = s;
    }
}

int main()
{
    fac_gen();
    int n, c, s, f, i;
    while(scanf("%d", &n)==1)
    {
        c=0, f=0;
        for(i=8; i>=1; i--)
        {
            while(n >= mp[i])
            {
                n -= mp[i];
                c++;
                if(n == 0)
                {
                    break;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
