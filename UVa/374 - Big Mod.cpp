#include <bits/stdc++.h>
using namespace std;
long long bg(long long a, long long b, long long c)
{
    if(b == 0)
    {
        return 1 % c;
    }
    long long x = bg(a, b/2, c);
    x = (x * x) % c;
    if(b % 2 == 1)
    {
        x = (x * a) % c;
    }
    return x;
}
int main()
{
    long long a, b, c, ans;
    while(cin >> a >> b >> c)
    {
        ans = bg(a, b, c);
        cout << ans << endl;
    }
    return 0;
}
