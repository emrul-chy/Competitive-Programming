#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll x, y, i, c, n, mx, ans;
    while(cin >> x >> y && x != 0 && y != 0)
    {
        if(x > y)
        {
            swap(x, y);
        }
        c = 0, mx = 0;
        for(i=x; i<=y; i++)
        {
            n = i;
            c = 1;
            if(n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            while(n != 1)
            {
                if(n % 2 == 0)
                {
                    n /= 2;
                }
                else
                {
                    n = 3 * n + 1;
                }
                c++;
            }
            if(c > mx)
            {
                mx = c;
                ans = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", x, y, ans, mx);
    }
    return 0;
}
