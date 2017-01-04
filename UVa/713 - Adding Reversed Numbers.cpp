#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum, c;
    cin >> t;
    while(t--)
    {
        string s, a, b;

        cin >> a;
        cin >> b;

        if(a.size() > b.size())
        {
            string tm = a;
            a = b;
            b = tm;
        }

        for(int i = a.size(); i < b.size(); i++)
        {
            a += "0";
        }

        c = 0, sum = 0;

        for(int i=0; i<b.size(); i++)
        {
            sum = a[i] - '0' + b[i] - '0';;
            sum += c;
            c = sum / 10;
            sum %= 10;
            s += (char) (sum + 48);
        }

        if(c != 0)
        {
            s += (char) (c + 48);
        }

        int flg = 0;

        for(int i = 0; i< s.size(); i++)
        {
            if(flg == 1) cout << s[i];
            else
            {
                if(s[i] != '0')
                {
                    flg = 1;
                    cout << s[i];
                }
            }
        }
        
        cout << endl;
    }
    return 0;
}
