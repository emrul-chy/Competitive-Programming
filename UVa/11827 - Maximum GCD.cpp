#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, n, i, x, j, mx, ar[105];
    string s;
    scanf("%lld", &T);
    getchar();
    while(T--)
    {
        n = 0, mx = 0;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> ar[n])
        {
            n++;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i != j)
                mx = max(mx, __gcd(ar[i], ar[j]));
            }
        }
        cout << mx << endl;
    }
    return 0;
}
