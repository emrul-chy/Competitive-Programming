#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s;
    int t, i, n, k, j, a[100];
    cin >> t;
    for(i=0; i<t; i++)
    {
        j = 0, s= 0;
        while(1)
        {
            cin >> n;
            if(n == 0)
            {
                break;
            }
            a[j++]=n;
        }
        sort(a, a+j);
        int x=1;
        for(k=j-1; k>=0; k--)
        {
            s+= 2 * pow(a[k], x);
            x++;
        }
        if( s <= 5000000)
        {
            printf("%0.0lf\n", s);
        }
        else
        {
            printf("Too expensive\n");
        }
    }
    return 0;
}
