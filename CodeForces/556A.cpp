#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    long long int a=0, b=0, n, i, l;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        if(c == '1')
        {
            a++;
        }
        else if(c == '0')
        {
            b++;
        }
    }
    l = n - (min(a, b) * 2);
    cout<<l<<endl;
    return 0;
}
