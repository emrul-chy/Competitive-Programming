#include <bits/stdc++.h>
#define MX 1000000000
using namespace std;
int main()
{
    int i, l, s;
    char a[1005];
    while(cin>>a)
    {
        s = 0;
        l = strlen(a);
        if(a[0] == '0' && l == 1)
        {
            break;
        }
        for(i=0; i<l; i++)
        {
            s = s * 10 + a[i] - '0';
            s %= 17;
        }
        if(s == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n" );
        }
    }
    return 0;
}
