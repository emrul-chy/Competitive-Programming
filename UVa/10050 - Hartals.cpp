#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, s, c, t, a, b, j, k, x=0, y[10000], p, arr[1005];
    cin>>t;
    for(i=0; i<t; i++)
    {
        x=1;
        a = 0;
        cin>>n;
        cin>>p;
        for(k=0; k<p; k++)
        {
            c =0, s=0;
            cin>>arr[k];
            while(s<=n)
            {
                s += arr[k];
                if((s % 7 !=6 && s % 7 !=0 && s<=n))
                {
                    y[x++] = s;
                }
            }
        }
        a = 0;
        for(k=1; k<x; k++)
        {
            for(b=1; b<x; b++)
            {
                if(b!=k && y[k] == y[b]) y[b] = 0;
            }
        }
        for(k=1; k<x; k++)
        {
            if(y[k] !=0) a++;
        }
        cout<<a<<endl;
        x=0;
    }
    return 0;
}
