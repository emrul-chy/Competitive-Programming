#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j, n, c, ans = 0;
    cin >> t;
    for(i=0; i<t; i++)
    {
        c = 0;
        for(j=0; j<3; j++)
        {
            cin >> n;
            if(n == 1)
            {
                c++;
            }
        }
        if(c >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
