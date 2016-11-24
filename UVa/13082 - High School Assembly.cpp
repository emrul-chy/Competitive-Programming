#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[20005],j,k, i, t, n, c;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        c=0;
        //memset(mp, 0, sizeof(mp));
        for(j=0; j<n;j++)
        {
            cin >> ar[j];
        }
        int mn = 0;
        for(j=0; j<n; j++)
        {
            if(mn + 1 == ar[j])
            {
                mn++;

                //cout << j << " ";
            }

        }
        printf("Case %d: %d\n", i, n-mn);
    }
}
