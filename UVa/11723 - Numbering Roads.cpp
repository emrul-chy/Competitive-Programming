#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n, j=1;
    while(scanf("%d %d", &r, &n) == 2)
    {
        if(!n && !r)
        {
            break;
        }
        printf("Case %d: ", j++);
        if(r > n + (n * 26))
        {
            printf("impossible\n");
        }
        else
        {
            printf("%d\n", ((r-n) % n == 0 || r < n) ? (r-n) / n : (r-n) / n + 1);
        }
    }
    return 0;
}
