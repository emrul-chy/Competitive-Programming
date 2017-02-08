#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int T, n, j, x, i;
    cin >> T;
    while(T--)
    {
        x = 0;
        map <int, int> mp;
        cin >> n;
        j = 1;
        while(n--)
        {
            cin >> s;
            if(s == "RIGHT")
            {
                mp[j] = 1;
                x++;
            }
            else if(s == "LEFT")
            {
                mp[j] = -1;
                x--;
            }
            else
            {
                cin >> s >> i;
                mp[j] = mp[i];
                if(mp[i] == 1)
                {
                    x++;
                }
                else if(mp[i] == -1)
                {
                    x--;
                }
            }
            j++;
        }
        printf("%d\n", x);
    }
    return 0;
}
