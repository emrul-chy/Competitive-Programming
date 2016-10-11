#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d, x=0;
    cin>>n>>b>>d;
    int arr[n], s=0, c=0, i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] <= b)
        {
            s += arr[i];
            if(s>d)
            {
                s = 0;
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
