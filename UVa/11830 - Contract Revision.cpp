#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    int n, i, flg;
    while(cin >> n >> s)
    {
        if(!n && s == "0")
        {
            break;
        }
        ans = "", flg = 0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i] != n+'0')
            {
                if(s[i] != '0')
                {
                    flg = 1;
                }
                if(flg)
                {
                    ans += s[i];
                }
            }
        }
        if(!ans.size())
        {
            ans = "0";
        }
        cout << ans << endl;
    }
    return 0;
}
