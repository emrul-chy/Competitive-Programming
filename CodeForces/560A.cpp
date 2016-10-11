#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, t, flg = 0;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        if( n == 1)
        {
            flg = 1;
        }
    }
    if(flg == 1)
    {
        printf("-1\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}
