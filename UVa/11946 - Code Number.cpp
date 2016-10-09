#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[100006];
    while(cin>>t)
    {
        if(t == 0)
        {
            break;
        }
        int i, c =0;
        for(i=1; i<=t; i++)
        {
            cin>>a[i];
        }
        a[0] = a[t];
        a[t+1] = a[1];
        for(i=1; i<t; i++)
        {
            if(a[i-1] > a[i] && a[i] < a[i+1] || a[i-1] < a[i] && a[i] > a[i+1])
            {
                c++;
            }
        }
        cout<<c+1<<endl;
    }
    return 0;
}

