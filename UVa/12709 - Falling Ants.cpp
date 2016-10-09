#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b, sum, c, ans, j, mx;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        mx = 0;
        ans = 0;
        sum = 0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b>>c;

            if(c >= mx)
            {
                sum = a * b * c;
                if(c == mx)
                {
                    ans = max(ans, sum);
                }
                else if(c > mx)
                {
                    mx = c;
                    ans = sum;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
