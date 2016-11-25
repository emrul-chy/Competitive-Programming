#include <bits/stdc++.h>
using namespace std;
vector <string> str;
map<double, string> mp;
int main()
{
    double dn, ar[1005];
    string word;
    int i, n, j, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> word;
            str.push_back(word);
            dn = atof(word.c_str());
            ar[i] = dn;
        }
        sort(str.begin(), str.end());
        for(i=0; i<n; i++)
        {
            cout << str[i];
            if(i!=n-1) cout << ",";
            else cout << endl;
        }
        str.clear();
    }
    return 0;
}
