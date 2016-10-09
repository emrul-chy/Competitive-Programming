#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ii=1, i, n, flg, t, mx, j, s, sum;
    while(cin >> s)
    {
        if(s == 0)
        {
            break;
        }
        mx = -1;
        flg = 0;
        for(i=1; i<=s; i++)
        {
            sum = 0;
            for(j=1; j<=i; j++)
            {
                if(i % j == 0)
                {
                    sum += j;
                }
            }
            if(sum == s)
            {
                if(i > mx)
                {
                    mx = i;
                }
                flg = 1;
            }
        }
        printf("Case %d: %d\n", ii, mx);
        ii++;
    }
    return 0;
}
