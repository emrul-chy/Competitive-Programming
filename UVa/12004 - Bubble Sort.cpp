#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, n, ans;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        ans = n * (n-1);
        printf("Case %lld: ", i+1);
        if( ans % 4 == 0)
        {
            cout << ans / 4 << endl;
        }
        else
        {
            cout << ans / 2 << "/" << 2 << endl;
        }
    }
    return 0;
}
