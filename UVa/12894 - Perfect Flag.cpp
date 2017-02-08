#include <bits/stdc++.h>
using namespace std;

#define ll  long long int

int main()
{
    int T, x, y, x1, y1, cx, cy, a, b, r;
    cin >> T;
    while(T--)
    {
        cin >> x >> y >> x1 >> y1 >> cx >> cy >> r;
        x1 -= x, y1 -= y, cx -= x, cy -= y;
        cout << (((3*x1!= 5*y1) || (x1*9 != 20*cx || y1 != 2*cy) || (x1 != r*5)) ? "NO" : "YES") << endl;
    }
    return 0;
}
