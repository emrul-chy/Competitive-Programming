#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j, s, x;
    char c[100];
    cin >> t;
    getchar();
    for(i=0; i<t; i++)
    {
        cin >> c;
        x = 0, s =0;
        int l = strlen(c);
        for(j=0; j<l; j++)
        {
            if(c[j] == 'O')
            {
                x++;
                s+=x;
            }
            else if(c[j] == 'X')
            {
                x = 0;
            }
        }
        cout << s << endl;
    }
    return 0;
}
