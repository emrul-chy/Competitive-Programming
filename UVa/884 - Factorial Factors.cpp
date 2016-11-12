#include <bits/stdc++.h>
using namespace std;

#define MX 1000010
int ans[MX];

int main()
{
    int n, T, i, j, s, c = 0;
    for(i=2; i<=MX; i++)
    {
        s = i;
        T = sqrt(i);
        for(j=2; j<=T; j++)
        {
            while(s % j==0)
            {
                c++;
                s /= j;
            }
        }
        if(s != 1)
        {
            c++;
        }
        ans[i] = c;
    }

    while(cin >> n)
    {
        cout << ans[n] << "\n";
    }
    return 0;
}
