#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, t, j, c, a[5];
    cin >> t;
    for(i=0; i<t; i++)
    {
        c = 0;
        for(j=0; j<5; j++)
        {
            cin >> a[j];
        }
        for(j=0; j<4; j++)
        {
            if(a[j] + 1 != a[j+1])
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout << "Y\n";
        }
        else if(c == 1)
        {
            cout << "N\n";
        }
    }
    return 0;
}
