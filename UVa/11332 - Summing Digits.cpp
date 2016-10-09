#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    while(cin>>t)
    {
        if(t == 0) break;
        while(t>9)
        {
            t = t % 10 + (t / 10);
        }
        cout<<t<<endl;
    }

    return 0;
}
