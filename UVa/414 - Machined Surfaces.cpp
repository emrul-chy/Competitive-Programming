#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s;
    ll t, mn, n, i, j, c, ar[123];
    while(cin >> n && n != 0)
    {
        mn = -1;
        getchar();
        for(i=0; i<n; i++)
        {
            getline(cin, s);
            c = 0;
            for(j=0; j<s.size(); j++)
            {
                if(s[j] != 'X')
                {
                    c++;
                }
            }
            if(c < mn || mn == -1)
            {
                mn = c;
            }
            ar[i] = c;
        }
        c = 0;
        for(i=0; i<n; i++)
        {
            c += (ar[i]-mn);
        }
        cout << c << endl;
    }
    return 0;
}
