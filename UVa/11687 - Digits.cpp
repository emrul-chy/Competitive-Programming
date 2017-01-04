#include <bits/stdc++.h>
using namespace std;

int rec(int c, string s)
{
    int l = s.size();
    stringstream ss;
    ss << l;

    if(ss.str() == s)
    {
        return c;
    }
    // cout << ss.str() << endl;
    return rec(c+1, ss.str());
}

int main()
{
    string s;
    while(cin >> s, s != "END")
    {
        cout << rec(1, s) << endl;
    }
    return 0;
}
