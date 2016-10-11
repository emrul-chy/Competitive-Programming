#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[110];
    cin >> c;
    int i, l, c0=0, c1=0;
    l = strlen(c);
    for(i=0; i<l; i++)
    {
        if(c[i] == '0')
        {
            c0++;
            c1 = 0;
        }
        else if(c[i] == '1')
        {
            c1++;
            c0 = 0;
        }
        if(c0 >= 7 || c1 >=7)
        {
            cout << "YES\n";
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
