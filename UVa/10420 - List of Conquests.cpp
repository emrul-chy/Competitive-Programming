#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T, i, l;
    vector <string> v;
    map <string, int> mp;
    string s, a;
    cin >> T;
    getchar();
    while(T--)
    {
        cin >> s;
        getchar();
        getline(cin,a);
        if(mp[s] != 0)
        {
            mp[s]++;
        }
        else
        {
            mp[s]++;
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());
    l = v.size();

    for(i=0; i<l; i++)
    {
        string x = v[i];
        cout << x << " " << mp[x] <<endl;
    }

    v.clear();

    return 0;
}
