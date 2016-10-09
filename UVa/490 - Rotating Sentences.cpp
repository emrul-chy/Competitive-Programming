#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[110][110];
    int i=0, k, mx =0, j, l;
    for(i=0; i<110; i++)
    {
        for(j=0; j<110; j++)
        {
            c[i][j] = ' ';
        }
    }
    i=j=0;
    while(gets(c[i]))
    {
        l = strlen(c[i]);
        if(l >= mx)
        {
            mx = l;
        }
        c[i][l] = ' ';
        i++;
    }
    for(j=0; j<mx; j++)
    {
        for(k=i-1; k>=0; k--)
        {
            cout << c[k][j];
        }
        cout << endl;
    }
    return 0;
}
