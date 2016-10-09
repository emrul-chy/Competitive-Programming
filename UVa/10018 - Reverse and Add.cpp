#include <bits/stdc++.h>
using namespace std;
unsigned long long int rev(unsigned long long int n)
{
    unsigned long long int r = 0;
    while (n != 0)
    {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    return r;
}
int main()
{
    unsigned long long int i, t, n,s, k,r, m, c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        s = 0;
        n+=rev(n);
        c = 1;
        if(n != rev(n))
        {
            for(k=0; k<1000; k++)
            {
                s = n + rev(n);
                c++;
                n = s;
                if(n == rev(n)) break;
            }
        }
        cout<<c<<" "<<n<<endl;
    }
    return 0;
}
