#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, flg, a, b, c;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        flg = 0;
        if(a + b > c && b + c > a && c + a > b)
        {
            flg = 1;
            printf("OK\n");
        }
        if(flg == 0)
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
