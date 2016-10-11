#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int i, t, n, j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int l;
        cin>>l;
        double w, r, a, rr;
        w = l * 6 / 10.0;
        a = w * l;
        rr = l * 1 / 5.0;
        double pi = acos(-1);
        r = rr * pi * rr;
        w = a - r;
        printf("%0.2lf %0.2lf\n", r, w);
    }
    return 0;
}
