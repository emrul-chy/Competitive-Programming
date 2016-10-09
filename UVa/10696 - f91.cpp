#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, n;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        if(n>100)
        {
            b = n - 10;
        }
        else
        {
            b = 91;
        }
        printf("f91(%d) = %d\n", n, b);
    }
    return 0;
}
