#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, a, n, x=0;
    char c;
    cin>>n>>t;
    for(i=0; i<n; i++)
    {
        cin>>c>>a;
        if(c == '+') t+=a;
        else if(c== '-' && a <=t ) t-=a;
        else if(c== '-' && a >t ) x++;
    }
    cout<<t<<" "<<x<<endl;
    return 0;
}
