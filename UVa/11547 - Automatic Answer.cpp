#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n = abs((((n * 63 + 7492) * 5 - 498) / 10) % 10);
        cout << n << endl;
    }

    return 0;
}
