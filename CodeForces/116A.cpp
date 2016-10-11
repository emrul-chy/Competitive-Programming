#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b, s = 0, d=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a >> b;
        s -= a;
        s += b;
        if(s > d)
        {
            d = s;
        }
    }
    cout << d << endl;
    return 0;
}
