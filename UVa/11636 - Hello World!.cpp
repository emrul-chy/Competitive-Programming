#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=0, t;
    while(cin>>n)
    {
        i++;
        if(n < 0)
        {
            break;
        }
        int s = 1, w= 0, c = 1;;
        while(s < n)
        {
            s += c;
            c = s;
            w++;
        }
        printf("Case %d: %d\n", i, w);
    }
    return 0;
}
