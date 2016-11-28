#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, k, a;

    while(getline(cin, s))
    {
        map <int, int> mp;

        k = "", a = "";

        int i, m = 1, x;

        for(i=0; i<s.size(); i++)
        {
            if(mp[s[i]] == 0)
            {
                x = m;
                mp[s[i]] = m;
                m++;
            }

            else
            {
                x = mp[s[i]];
            }

            stringstream ss;
            ss << x;
            k = ss.str();
            a += k;
        }

        for(i=0; i<a.size(); i++)
        {
            if(a[i] == '2')
            {
                cout << 5;
            }
            else if(a[i] == '5')
            {
                cout << 2;
            }
            else if(a[i] == '9')
            {
                cout << 6;
            }
            else if(a[i] == '6')
            {
                cout << 9;
            }
            else
            {
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}
