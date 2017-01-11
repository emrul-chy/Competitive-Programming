#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a, b;
    string s;
    int t, i, j, n, sum, c, x, y;
    cin >> t;
    for(j=1; j<=t; j++)
    {
        cin >> n;
        s = "";
        for(i=0; i<n; i++)
        {
            cin >> x >> y;
            a.push_back(x);
            b.push_back(y);
        }
        c = 0;
        for(i=n-1; i>=0; i--)
        {
            sum = a[i] + b[i] + c;
            c = sum / 10;
            sum %= 10;
            s += sum + 48;
        }
        if(c > 0)
        {
            s += c + 48;
        }
        if(s.size() < n)
        {
            for(i=s.size(); i<n; i++)
            {
                s += "0";
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
        a.clear();
        b.clear();
        if(j != t)
        {
            printf("\n");
        }
    }
    return 0;
}
