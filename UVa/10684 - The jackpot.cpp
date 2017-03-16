#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, m, x;
    while(scanf("%d", &n), n)
    {
        m = t = 0;
        while(n--)
        {
            scanf("%d", &x);
            m = max(m, t = max(0, t + x));
        }
        if(m > 0)
            printf("The maximum winning streak is %d.\n", m);
        else
            printf("Losing streak.\n");
    }
    return 0;
}
