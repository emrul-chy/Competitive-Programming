#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, s, j=1, n, k, c, a[52], avg;
    while(cin>>t)
    {
        if(t == 0) break;
        s = 0;
        c = 0;
        for(i = 0; i < t; i++)
        {
            cin>>a[i];
            s += a[i];
        }
        avg = s / t;
        for(i = 0; i < t; i++)
        {
            if(a[i] >= avg)
            {
                c += (a[i] - avg);
            }
        }
        cout<<"Set #"<<j<<endl;
        cout<<"The minimum number of moves is "<<c<<"."<<endl<<endl;
        j++;
    }
    return 0;
}
