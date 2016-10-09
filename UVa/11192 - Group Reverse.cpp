#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, i, j, n, m;
    char c[100000];
    while(cin >> t)
    {
        if(t==0)
        {
            break;
        }
        cin >> c;
        l = strlen(c);
        int x = l / t;
        for(i=0; i<l; i+=x)
        {
            for(j=i+x-1; j>=i; j--)
            {
                cout << c[j];
            }
        }
        cout << endl;
    }
    return 0;
}
