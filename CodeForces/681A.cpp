#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, a, b, sum=0;
    char c[10];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>c>>a>>b;
        if(a >= 2400 && b> a)
        {
            sum++;
        }
    }
    if( sum >= 1 )
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
