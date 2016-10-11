#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[105], ans[300];
    int i, j=0, l;
    cin >> c;
    l = strlen(c);
    for(i=0; i<l; i++)
    {
        c[i] = tolower(c[i]);
        if( c[i] >= 'a' && c[i] <= 'z')
        {
            if(c[i] != 'a' && c[i] != 'y' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' )
            {
                ans[j++] = '.';
                ans[j++] = c[i];
            }
        }
    }
    ans[j] = '\0';
    cout << ans << endl;
    return 0;
}
