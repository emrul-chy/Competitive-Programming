#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, t, c;
    while(cin>>a>>b)
    {
        c = 0;
        if(a == 0 && b == 0)
        {
            break;
        }
        for(i=a; i<=b; i++)
        {
            t = sqrt(i);
            if(t*t == i)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
