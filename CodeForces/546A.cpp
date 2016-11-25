#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, w, ans;
    cin >> k >> n >> w;
    ans = ((w * (w + 1)) /2) * k - n;
    if(ans < 0) ans = 0;
    cout << ans;
    return 0;
}
