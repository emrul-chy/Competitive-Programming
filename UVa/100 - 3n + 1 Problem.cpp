#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, i, b, n, c=0, tt;
    while(cin>>a>>b)
    {
        tt = 0;
        for(i=min(a,b); i<=max(a,b); i++)
        {
            c = 0;
            c++;
            n = i;
            while( n != 1)
            {
                if(n % 2 == 1)
                {
                    n = 3 * n + 1;
                }
                else n = n / 2;
                c++;
            }
            if(c > tt) tt = c;
        }
        cout<<a<<" "<<b<<" "<<tt<<endl;
    }
    return 0;
}
