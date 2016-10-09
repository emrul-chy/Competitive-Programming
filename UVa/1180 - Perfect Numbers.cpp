#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;
    while(cin >> t)
    {
        for(i=0; i<t; i++)
        {
            scanf("%lld,", &n);
            if(n == 2 || n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || n == 31)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}
