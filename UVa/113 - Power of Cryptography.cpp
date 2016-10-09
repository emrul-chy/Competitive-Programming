#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, p, s;
    while(cin>>n>>p)
    {
        s = pow(p, 1/n);
        printf("%0.0lf\n", s);
    }
    return 0;
}
