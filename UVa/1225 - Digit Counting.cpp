#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int i, t, n, j, a[10];
    cin>>t;
    for(i=0; i<t; i++)
    {
        for(j =0; j<10; j++)
        {
            a[j] = 0;
        }
        cin>>n;
        for(j =1; j<=n; j++)
        {
            int k = j;
            while(k !=0)
            {
                int s = k % 10;
                a[s]++;
                k = k / 10;
            }
        }
        for(j=0; j<9; j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<a[9]<<endl;
    }
    return 0;
}
