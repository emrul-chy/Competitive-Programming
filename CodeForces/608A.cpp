#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, c=0,j, a[10000], b[10000];
    cin>>n>>t;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=n-1; i>=0; i--)
    {
        c+=t-a[i];
        if (b[i] > c)
        {
            c+=b[i]-c;
        }
        t = a[i];
    }
    cout<<c+a[0]<<endl;
    return 0;
}
