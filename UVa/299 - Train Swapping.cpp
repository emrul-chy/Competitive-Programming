#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, s, j, n, k, a[52];
    cin>>t;
    for(i = 0; i < t; i++)
    {
        s = 0;
        cin>>n;
        for(j = 0; j<n; j++)
        {
            cin>>a[j];
        }
        for(k = 0; k < n-1; k++)
        {
            for(j = 0; j < n-k-1; j++)
            {
                if(a[j] > a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    s++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<s<<" swaps.\n";
    }
    return 0;
}
