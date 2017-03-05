#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    while(scanf("%d", &T), T)
    {
        string s;
        vector <string> v;
        map <string, int> mp;
        int sum = 0, mx = 0, i, ar[5];
        while(T--)
        {
            s = "";
            for(i=0; i<5; i++)
            {
                scanf("%d", &ar[i]);
            }
            sort(ar, ar+5);
            for(i=0; i<5; i++)
            {
                while(ar[i] != 0)
                {
                    s += (ar[i] % 10 + '0');
                    ar[i] /= 10;
                }
            }
            reverse(s.begin(), s.end());
            v.push_back(s);
            mp[s]++;
            mx = max(mx, mp[s]);
        }
        for(i=0; i<v.size(); i++)
        {
            sum += (mp[v[i]] == mx) ? 1 : 0;
        }
        cout << sum << endl;
    }
    return 0;
}
