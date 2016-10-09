#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        int arr[n];
        arr[0] = 0;
        arr[1] = 1;
        for(i=2; i<=n+1; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        cout<<arr[n+1]<<"\n";
    }
    return 0;
}
