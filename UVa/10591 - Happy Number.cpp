#include <bits/stdc++.h>
using namespace std;

string rec(string s)
{
    int i, sum = 0;
    for(i=0; i<s.size(); i++)
    {
        sum += (s[i]-48)*(s[i] - 48);
    }
    stringstream ss;
    ss << sum;
    s = ss.str();
    return s;
}

int main()
{
    string s;
    int T, flg, n, j=1, i, sum;

    cin >> T;

    while(T--)
    {
        cin >> s;
        map <string, int> mp;
        string k = s;
        flg = 0;
        n = atoi(s.c_str());
        if(n == 1)
        {
            flg = 1;
        }
        while(flg == 0 && mp[s] <= 1)
        {
            s = rec(s);
            n = atoi(s.c_str());
            if(n == 1)
            {
                flg = 1;
                break;
            }
            mp[s]++;
        }
        printf("Case #%d: ", j++);
        if(flg == 1)
        {
            cout << k << " is a Happy number.\n";
        }
        else
        {
            cout << k << " is an Unhappy number.\n";
        }
    }
    return 0;
}
