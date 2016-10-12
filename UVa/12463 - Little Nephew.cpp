#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    while(cin >> a >> b >> c >> d >> e)
    {
        if(a + b + c + d + e == 0)  break;
        printf("%d\n", a*b*c*d*d*e*e);
    }
    return 0;
}
