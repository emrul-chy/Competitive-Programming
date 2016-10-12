#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, x, i, j, c, n, a[10000];
    double s;
    cin >> T;
    while(T--)
    {
        cin >> n;
        i = 0;
        x = n;
        s = 0;
        c = 0;
        while(n != 0)
        {
            a[i] = n % 10;
            n/=10;
            c++;
            i++;
        }
        for(j=0; j<i; j++)
        {
            s += pow(a[j], c);
        }
        if((int)s == x)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
