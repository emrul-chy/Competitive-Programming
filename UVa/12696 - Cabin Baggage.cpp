#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, c=0, flg;
    double l, w, d, kg;
    cin >> T;
    while(T--)
    {
        flg = 1;
        cin >> l >> w >> d >> kg;
        if(( w > 45.0 || d > 25.0 || l > 56.0) && (double) (w + l + d) > 125.0 )
        {
            printf("0\n");
            continue;
        }
        if( kg > 7 )
        {
            printf("0\n");
            continue;
        }
        printf("1\n");
        c++;
    }
    printf("%d\n", c);
    return 0;
}
