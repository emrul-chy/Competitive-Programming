#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, k;
    char s[100000];
    cin >> t;
    getchar();
    while (t--)
    {
        gets(s);
        n = strlen(s);
        k = (int)sqrt(n);
        if (k*k==n)
        {
            for ( i=0; i<k; i++)
            {
                for ( j=0; j<k; j++)
                {

                    cout << s[i + j*k];
                }
            }
        }
        else
        {
            cout << "INVALID";
        }
        cout << endl;
    }
    return 0;
}
