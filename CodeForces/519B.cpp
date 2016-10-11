#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i, j, sum1 =0, sum2=0, sum3=0, a[100005];
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
        sum1+=a[i];
    }
    for(i=0; i<n-1; i++)
    {
        scanf("%lld", &a[i]);
        sum2+=a[i];
    }
    for(i=0; i<n-2; i++)
    {
        scanf("%lld", &a[i]);
        sum3+=a[i];
    }
    cout << sum1 - sum2 << endl << sum2 - sum3 << endl;
    return 0;
}

