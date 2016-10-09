#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i, t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        cout<<(c*(a+(a-b)))/(a+b)<<endl;
    }
    return 0;
}
