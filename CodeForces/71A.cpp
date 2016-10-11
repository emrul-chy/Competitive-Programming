#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[105];
    int i, t, j, l;
    cin >> t;
    for(i = 0; i < t; i++)
    {
        cin >> c;
        l = strlen(c);
        if(l <= 10)
        {
            cout << c << endl;
        }
        else
        {
            printf("%c%d%c\n", c[0], l - 2, c[l-1]);
        }
    }
    return 0;
}
