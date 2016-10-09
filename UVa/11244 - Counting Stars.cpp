#include <bits/stdc++.h>
using namespace std;
#define MX 1000
int main()
{
    long long int i, j, t, r, c;
    char a[MX][105];
    while(cin >> r >> c)
    {
        if(c == 0 && r == 0)
        {
            break;
        }
        getchar();
        int ct = 0;
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                cin >> a[i][j];
            }
        }
        for(j=0; j<=c+1; j++)
        {
            a[0][j] = '.';
            a[r+1][j]= '.';
        }
        for(i=0; i<=r+1; i++)
        {
            a[i][0] = '.';
            a[i][c+1]= '.';
        }
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(a[i][j] == '*')
                {
                    if(a[i+1][j] != '*' && a[i-1][j] != '*')
                    {
                        if(a[i][j+1] != '*' && a[i][j-1] != '*')
                        {
                            if(a[i+1][j+1] != '*' && a[i+1][j+1] != '*')
                            {
                                if(a[i-1][j-1] != '*' && a[i-1][j-1] != '*')
                                {
                                    if(a[i+1][j-1] != '*' && a[i-1][j+1] != '*')
                                    {
                                        ct++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << ct << endl;
    }
    return 0;
}
