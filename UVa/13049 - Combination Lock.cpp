#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, c, i, x, y, j = 1;
    char a[200], b[200];

    cin >> T;

    while(T--)
    {
        cin >> n;

        cin >> a >> b;
        c = 0;

        for(i=0; i<n; i++)
        {
            x = a[i] - '0';
            y = b[i] - '0';
            c += min(abs(x-y), 10 - abs(x-y));
        }

        printf("Case %d: %d\n", j, c);
        j++;
    }

    return 0;
}
