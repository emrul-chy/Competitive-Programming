#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, xl=0, maxi=0, tt=0,n, w=0, j, o;
    char c[102];
    cin>>n>>t;
    for(i=0; i<t; i++)
    {
        o=0;
        cin>>c;
        for(j=0; j<n; j++)
        {
            if(c[j] == '1') o++;
        }

        if(o==n)
        {

            tt=0;
        }
        else
        {
            tt++;
        }
        if(tt>xl)
        {
            xl = tt;
        }
    }
    cout<<xl<<endl;
    return 0;
}
