#include <bits/stdc++.h>
#define LL long long
#define mod 10000007
using namespace std;

int main()
{
    int n, i, j, l, mx;
    string s, x, ans;
    while(cin >> n >> s)
    {
        l = s.size(), mx =0;
        map <string, int> mp;
        for(i=0; i<l; i++)
        {
            x = "";
            if(i+n >= l)
                continue;
            for(j=i; j<i+n; j++)
            {
                x += s[j];
            }
            mp[x]++;
            if(mp[x] > mx)
            {
                mx = mp[x];
                ans = x;
            }
        }
        printf("%s\n", ans.c_str());
    }
    return 0;
}
