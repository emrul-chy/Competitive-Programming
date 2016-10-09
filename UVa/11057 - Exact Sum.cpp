#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b[10005], i, n, t, j,c, x, y, d;
    while(cin>>n)
    {
        c =0;
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        cin>>t;
        d = t;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i != j)
                {
                    if(b[i] + b[j] == t)
                    {
                        c = abs(b[i] - b[j]);
                        if(c < d)
                        {
                            x = b[i];
                            y = b[j];
                            d = c;
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", min(x,y), max(x,y));
    }
    return 0;
}
