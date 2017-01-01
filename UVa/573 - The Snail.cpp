#include <bits/stdc++.h>
using namespace std;

#define ll   long long int

int main()
{
    ll h, d, n, i, flg, f;
    while(cin >> h >> n >> d >> f)
    {
        if(h == 0)
        {
            break;
        }
        flg = 0, i=0;
        double sum = 0 ,x = (double)n * (f/100.0);
        double u = n;
        while(flg == 0)
        {
            if(sum < 0 && i != 0)
            {
                printf("failure on day %lld\n", i);
                break;
            }
            if(u>0)
            sum += (u);
            i++;
            u -= x;
            if(sum > h)
            {
                printf("success on day %lld\n", i);
                break;
            }
            sum -= d;
        }
    }
    return 0;
}
