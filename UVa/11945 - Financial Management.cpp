2#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j;
    double n, sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        sum = 0;
        for(j=1; j<=12; j++)
        {
            cin>>n;
            sum+=n;
        }
        sum = sum / 12.0;
        int l;
        if(sum > 999.99)
        {
            l = sum / 1000.0;
            sum = sum - (l * 1000);
            printf("%d $%d,%0.2lf\n", i, l, sum);
        }
        else
        {
            printf("%d $%0.2lf\n", i, sum);
        }
    }
    return 0;
}
