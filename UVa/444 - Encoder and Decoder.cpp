#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        string a;
        int i, j, flg = 0, sum;
        for(i=0; i<s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                flg = 1;
                break;
            }
        }
        if(flg == 1)
        {
            reverse(s.begin(), s.end());
            for(i=0; i<s.size(); i+=2)
            {
                if(s[i] == '1')
                {
                    sum = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
                    a += sum;
                    i++;
                }
                else
                {
                    sum = (s[i] - '0') * 10 + (s[i+1] - '0');
                    a += sum;
                }
            }
            cout << a << endl;
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                int x = s[i];
                if(x > 99)
                {
                    a += (x / 100) + 48;
                    x %= 100;
                }
                a += (x / 10) + 48;
                a += (x % 10) + 48;
            }
            reverse(a.begin(), a.end());
            cout << a << endl;
        }
    }
    return 0;
}
