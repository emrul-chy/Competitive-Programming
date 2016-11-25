#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, s, x;
    cin >> t >> s >> x;
    int a = x, b = x -1;
    if(x < t)
    {
        printf("NO\n");
        return 0;
    }
    if((a-t) % s == 0  && (x-t)!= 1)
    {
        cout << "YES\n";
        return 0;
    }
    if((b-t) % s == 0 &&  (b-t) != 0)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
}
