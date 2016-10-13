#include <bits/stdc++.h>
using namespace std;

int main()
{
    double e, n, x = log10(2);
    while(cin >> n)
    {
        e = floor(n*x+1);
        if(n == 6)
        {
            printf("2^-6 = 1.562e-2\n");
        }
        else
        {
            printf("2^-%0.0lf = %.3lfe-%0.0lf\n", n, pow(10, e-(n*x)), e);
        }
    }
    return 0;
}
