#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int a, b, ans = 0, i, c, d, k;
    cin >> a >> b >> c >> d >> k;
    
    long long int x = 0, y = 0;

    x = max(a, c);
    y = min(b, d);
    ans = abs(x-y)+1;
    if( k >= a && k <=b) ans--;
    if((a > c && d < a) || b < c || a > d )
    {
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}
