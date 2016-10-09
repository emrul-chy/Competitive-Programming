#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, s, j, n, k, a[1005];
    while(cin>>n)
    {
        s =0;
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
        cout<<"Minimum exchange operations : "<<s<<"\n";
    }
    return 0;
}
