#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, r, l, w, a, b, c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>r;
        l = r * 5;
        w = l * 6 / 10;
        a = l * 45 / 100;
        b = l * 55 / 100;
        c = w / 2;
        printf("Case %d:\n", i);
        printf("%d %d\n", -a, c);
        printf("%d %d\n", b, c);
        printf("%d %d\n", b, -c);
        printf("%d %d\n", -a, -c);
    }
    return 0;
}
