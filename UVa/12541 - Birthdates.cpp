#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL T, n, d, m, y, i, sum;
string s;
vector <LL> v;
map <LL, string> mp;

int main()
{
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> s >> d >> m >> y;
        sum = d + y * 365 + m * 12;
        mp[sum] = s;
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    cout << mp[v[n-1]] << "\n" << mp[v[0]] << endl;
}
