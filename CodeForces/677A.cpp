#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, h, t;
    cin >> n >> h;
    c = n;
    while(n--)
    {
        cin >> t;
        if( t > h) c++;
    }
    cout << c;
    return 0;
}
