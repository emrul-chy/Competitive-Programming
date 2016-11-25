#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s, r;
        getline(cin, s);
        r = s;
        reverse(r.begin(), r.end());
        cout << r << endl;
    }
    return 0;
}
