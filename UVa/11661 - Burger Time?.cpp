#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s;
    ll c, mx, ans, n;
    while(cin >> n && n > 0)
    {
        cin >> s;
        ll i;
        c = 0; mx = n+1;
        ll fr = 0, fd = 0;
        for(i=0; i<n; i++)
        {
            if(s[i] == 'R' && fr == 0 && fd == 0)
            {
                fr = 1, c = 0;
            }
            else if(s[i] == 'D' && fd == 0 && fr == 0)
            {
                fd = 1, c = 0;
            }
            if(s[i] == 'Z')
            {
                mx=0;
                break;
            }
            if(fd == 1 && s[i] == 'D') c=0;
            else if(fr == 1 && s[i] == 'R') c=0;
            else if(fd == 1 || fr == 1) c++;
            if(fr == 1 && s[i] == 'D' && fd == 0)
            {
                fd = 1, fr = 0;
                mx = min(mx, c);
                c = 0;
            }
            else if(fr == 0 && fd == 1 && s[i] == 'R')
            {
                fd = 0, fr = 1;
                mx = min(mx, c);
                c=0;
            }
        }
        if(mx == n+1) mx=0;
        cout << mx << endl;
    }
    return 0;
}
