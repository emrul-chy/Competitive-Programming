#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, c=0, x, j, arr[2005];
    cin>>t>>n;
    for(i=0; i<t; i++)
    {
        cin>>x;
        if(x+n<=5)
        {
            arr[i] = x;
            c++;
        }
    }
    cout<<c/3<<endl;
    return 0;
}
