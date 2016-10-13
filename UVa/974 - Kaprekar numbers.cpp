#include <bits/stdc++.h>
using namespace std;
long long a[100000000], i, j, x=2, y=2, b[100000000];
int main()
{

    a[1] = 1;
    b[1] = 1;
    for(i=2; i<=10000; i++)
    {
        for(j=i; j>=1; j--)
        {
            a[x++] = j;
        }
        for(j=1; j<=i; j++)
        {
            b[y++] = j;
        }
    }
    int n;
    while(cin >> n)
    {
        cout << a[n] << "/" << b[n] << endl;
    }
    return 0;
}
