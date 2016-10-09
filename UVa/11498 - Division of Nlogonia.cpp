#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, m, j, x, y;
    while(cin >> t)
    {
        if(t == 0)
        {
            break;
        }
        cin >> x >> y;
        for(i=0; i<t; i++)
        {
            cin >> n >> m;
            if(n == x || m == y)
            {
                printf("divisa\n");
            }
            else if(n < x && m < y)
            {
                printf("SO\n");
            }
            else if(n > x && m > y)
            {
                printf("NE\n");
            }
            else if(n < x && m > y)
            {
                printf("NO\n");
            }
            else if(n > x && m < y)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
