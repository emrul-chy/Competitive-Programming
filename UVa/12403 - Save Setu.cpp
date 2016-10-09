#include <bits/stdc++.h>
#define MX 1000000000
using namespace std;
int main()
{
    int i, n, t, j, s = 0;
    char c[20];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        if(strcmp(c, "donate")==0)
        {
            cin>>t;
            s+=t;
        }
        if(strcmp(c, "report")==0)
        {
            cout<<s<<endl;
        }
    }
    return 0;
}
