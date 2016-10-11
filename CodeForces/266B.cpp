#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, j, ct=0, l;
    char c[1005];
    cin >> n >> t;
    getchar();
    gets(c);
    c[n] = '\0';
    l = strlen(c);
    for(j=0; j<t; j++)
    {
        for(i=0; i<l-1; i++)
        {
            if(c[i] == 'B' & c[i+1] == 'G')
            {
                c[i] = 'G';
                c[i+1] = 'B';
                i++;
            }
        }
    }
    cout << c << endl;
    return 0;
}
