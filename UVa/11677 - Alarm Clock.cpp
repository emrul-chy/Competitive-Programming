#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, ans, h, m;
    while(cin>>a>>b>>c>>d)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }
        if(a > c)
        {
            c+=24;
        }
        else if(a == c && b < d )
        {
            a = 0;
            c = 0;
        }
        else if(a == c && b > d )
        {
            c += 24;
        }
        else if(c == 0) c = 24;

        ans = abs((c*60 + d)-(a*60 + b));
        cout<<ans<<endl;
    }
    return 0;
}
