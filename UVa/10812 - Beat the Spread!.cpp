#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, x, y;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        x = (a+b) / 2;
        y = (a-b) / 2;
        if( a < b || (b - a) % 2 != 0)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%d %d\n", x, y);
        }

    }
    return 0;
}
