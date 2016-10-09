#include <bits/stdc++.h>
using namespace std;
long int arr[2000005];
int main()
{
    int i, n, j, temp;
    while(cin>>n)
    {
        if( n == 0 ) break;
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+i);
        for(i=0; i<n; i++)
        {
            if(i==n-1)
                cout<<arr[i]<<endl;
            else
                cout<<arr[i]<<" ";
        }
    }
    return 0;
}
