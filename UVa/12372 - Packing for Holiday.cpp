#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, a, b, c, x;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a > 20 || b > 20 || c > 20)
        {
            printf("Case %d: bad\n", i+1);
        }
        else
        {
            printf("Case %d: good\n", i+1);
        }
    }
    return 0;
}
