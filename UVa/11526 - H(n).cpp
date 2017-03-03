#include <bits/stdc++.h>
using namespace std;

long long H(int n)
{
    long long s = 0;
    int sq = (int) sqrt(n);
    for( int i = 1; i <= sq; i++ )
    {
        s = (s + n/i);
    }
    s = s * 2 - (sq*sq);
    return s;
}

int main()
{
    int t, n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        cin >> n;
        cout << H(n) << endl;
    }
    return 0;
}
