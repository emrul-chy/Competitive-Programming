#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p, c = 0, x, a[100];
    cin >> n >> p;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] <= 0)
        {
            c++;
        }
    }
    if(c == n)
    {
        cout << 0 << endl;
    }
    else
    {
        c = 0;
        x = a[p-1];
        for(i=0; i<n; i++)
        {
            if(a[i] > 0 && a[i] >= x)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
