#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, j, maxi, arr[100];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        maxi=0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for(j=0; j<n; j++)
        {
            if(arr[j]>maxi) maxi = arr[j];
        }
        cout<<"Case "<<i<<": "<<maxi<<endl;
    }
    return 0;
}
