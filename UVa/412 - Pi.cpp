#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if(x % y == 0)
    {
        return y;
    }
    return gcd(y, x % y);
}

int main()
{
    int n, t, i, j, c=0;
    vector <int> v;
    while(scanf("%d", &n))
    {
        c = 0;
        if(n == 0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d", &t);
            v.push_back(t);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(gcd(v[i], v[j])==1)
                {
                    c++;
                }
            }
        }
        if(c == 0)
        {
            printf("No estimate for this data set.\n");
        }
        else
        {
            printf("%.6lf\n", sqrt(6.0/(c * 2.0 / (n * (n - 1)))) );
        }
        v.clear();
    }
    return 0;
}
