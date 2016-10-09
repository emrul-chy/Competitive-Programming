#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, s, a, b, c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        s = b + c;
        while(s>a)
        {
            s = s - a;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
