#include <bits/stdc++.h>
#define MX 1000000000
using namespace std;
int main()
{
    int a[100], i, t, n, j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n == 1)
    {
        if(a[0] == 15)
        {
            printf("DOWN\n");
            return 0;
        }
        else if(a[0] == 0)
        {
            printf("UP\n");
            return 0;
        }
        else
        {
            printf("-1\n");
            return 0;
        }
    }

    if(n > 1)
    {
        if(a[n-1] == 15 && a[n-2] == 14)
        {
            printf("DOWN\n");
            return 0;
        }
        if(a[n-1] == 14 && a[n-2] == 15)
        {
            printf("DOWN\n");
            return 0;
        }
        if(a[n-1] == 1 && a[n-2] == 0)
        {
            printf("UP\n");
            return 0;
        }
        if(a[n-1] == 0 && a[n-2] == 1)
        {
            printf("UP\n");
            return 0;
        }
        if(a[n-1] < a[n-2] && a[n-2] != 0)
        {
            printf("DOWN\n");
            return 0;
        }
        else if(a[n-1] > a[n-2])
        {
            printf("UP\n");
            return 0;
        }
    }
    return 0;
}
