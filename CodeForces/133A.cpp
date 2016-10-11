#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1005];
    cin >> c;
    int i;
    for(i=0; c[i] != '\0'; i++)
    {
        if(c[i] == 'H' || c[i] == 'Q' || c[i] == '9')
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
