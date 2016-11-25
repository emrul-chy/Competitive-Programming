#include <bits/stdc++.h>

using namespace std;
int main()
{
    int ar[400],i, c=0,d;
    string of, wm;
    memset(ar, -1, sizeof(ar));
    cin >> d >> of >> wm;
    if(d == 31 && wm == "month")
    {
        cout << 7;
        return 0;
    }
    else if(d == 30 && wm == "month")
    {
        cout << 11;
        return 0;
    }
    else if(d <= 29 && wm == "month")
    {
        cout << 12;
        return 0;
    }
    if(wm == "week")
    {
        if(d==6 || d == 5) cout <<53;
        else cout <<52;
    }
}
