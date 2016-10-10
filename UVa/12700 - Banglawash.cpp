#include <bits/stdc++.h>
using namespace std;
int i, t, n, j, x, b, a, w;
int main()
{
    char ch;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        w = 0, a = 0, b = 0, x = 0;
        getchar();
        for(j=0; j<n; j++)
        {
            cin >> ch;
            if(ch == 'B')
            {
                b++;
            }
            else if(ch == 'W')
            {
                w++;
            }
            else if(ch == 'A')
            {
                a++;
            }
            else if(ch == 'T')
            {
                x++;
            }
        }
        printf("Case %d:", i);
        if(b == 0 && w == 0 && x == 0 && a >0)
        {
            printf(" ABANDONED");
        }
        else if(b ==  0 && x == 0)
        {
            printf(" WHITEWASH");
        }
        else if(w == 0 && x == 0)
        {
            printf(" BANGLAWASH");
        }
        else if(w > b)
        {
            printf(" WWW %d - %d", w, b);
        }
        else if(b > w)
        {
            printf(" BANGLADESH %d - %d", b, w);
        }
        else if(w == b)
        {
            printf(" DRAW %d %d", w, x);
        }
        printf("\n");
    }
    return 0;
}
