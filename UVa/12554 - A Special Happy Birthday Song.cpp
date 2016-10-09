#include <bits/stdc++.h>
#define MX 1000000000
using namespace std;
int main()
{
    char c[105][105];
    int n, i, j=0,s=0, x=0, t=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    i = 0;
    while(x != 1 && s!= 1)
    {
        for(j=0; j<16; j++)
        {
            if(j == 11)
            {
                printf("%s: Rujia\n", c[i]);
            }
            else if(j % 4 == 0)
            {
                printf("%s: Happy\n", c[i]);
            }
            else if(j % 4 == 1)
            {
                printf("%s: birthday\n", c[i]);
            }
            else if(j % 4 == 2)
            {
                printf("%s: to\n", c[i]);
            }
            else if(j % 4 == 3)
            {
                printf("%s: you\n", c[i]);
            }
            i++;
            if(i > n -1)
            {
                i = 0;
                s =1;
                if(t == 1)
                {
                    x = 1;
                }
            }
        }
        t=1;
    }
    return 0;
}
