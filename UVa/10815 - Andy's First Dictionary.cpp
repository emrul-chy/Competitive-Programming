#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map <string, int> mp;
    vector <string> v;
    string k;
    while(cin >> s)
    {
        k = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                k += s[i];
            }
            else
            {
                if(mp[k] == 0 && k.size() != 0 )
                {
                    v.push_back(k);
                    mp[k] = 1;
                }
                k = "";
            }
        }
        if(mp[k] == 0 && k.size() > 0)
        {
            v.push_back(k);
            mp[k] = 1;
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
