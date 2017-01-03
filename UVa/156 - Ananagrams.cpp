#include <bits/stdc++.h>
using namespace std;

#define ll   long long int

map <string, ll> mp;
map <string, ll> mps;
map <string, string> ms;
vector <string> v;

int main()
{
    string s;
    ll i, sum;
    while(cin >> s)
    {
        if(s == "#") break;
        string k = s;
        transform(k.begin(), k.end(), k.begin(), ::tolower);
        sort(k.begin(), k.end());
        if(mp[k] == 0)
        {
            sum = 0;
            for(i=0; i<k.size(); i++)
            {
                sum += (ll) k[i];
            }
            mp[k] = sum;
            ms[s] = k;
            v.push_back(s);
        }
        else
        {
            mps[k] = -1;
        }
    }
    sort(v.begin(), v.end());
    for(i=0; i<v.size(); i++)
    {
        if(mps[ms[v[i]]] == 0)
        cout << v[i] << endl;
    }
    return 0;
}
