#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, m;
    scanf("%d", &T);
    while(T--)
    {
        int mx = 0, mn = 0, x;
        scanf("%d %d", &n, &m);
        while(m--)
        {
            scanf("%d", &x);
            mx = max(mx, max(x, n-x));
            mn = max(mn, min(x, n-x));
        }
        printf("%d %d\n", mn, mx);
    }
    return 0;
}
