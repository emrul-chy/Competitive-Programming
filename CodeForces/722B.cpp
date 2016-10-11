#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, l,n, ct, j, a[105];
    char c[105][105];
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> a[i];
    }
    getchar();
    for(i=0; i<t; i++)
    {
        gets(c[i]);
    }
    for(i=0; i<t; i++)
    {
        l = strlen(c[i]);
        ct = 0;
        for(j=0; j<l; j++)
        {
            if(c[i][j] == 'a' || c[i][j] == 'e' || c[i][j] == 'i' || c[i][j] == 'o' || c[i][j] == 'u' || c[i][j] == 'y' )
            {
                ct++;
            }
        }
        if(ct != a[i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
