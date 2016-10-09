#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, j, n, c, t, jol[10000], a[10000];
    while(cin>>n)
    {
        c = 1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {
            jol[i] = abs(a[i+1] - a[i]);
        }
        sort(jol, jol+i);
        for(i=1; i<n; i++)
        {
            if(jol[i-1] == jol[i])
            {
                c = 0;
                break;
            }
        }
        if(c == 0)
        {
            printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
    }
    return 0;
}
