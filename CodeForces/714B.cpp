#include <bits/stdc++.h>
using namespace std;

vector <int> v;
map <int, int> mp;

int main()
{
    int t, n, i, x = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> t;
        if(mp[t] != 1)
        {
            v.push_back(t);
            mp[t] = 1;
            x++;
        }
    }

    sort(v.begin(), v.end());

    if( x <= 2)
    {
        cout << "YES\n";
        return 0;
    }

    if(x > 3)
    {
        cout << "NO\n";
        return 0;
    }

    if(v[2] - v[1] == v[1] - v[0])
    {
        cout << "YES\n";
        return 0;
    }

    cout << "NO\n";
    return 0;
}
