#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, l, i;
    while(scanf("%d", &n) == 1)
    {
        s = 0, l = 0;
        for(i = 1; ; i++)
        {
            s += i;
            if(s >= n)
            {
                l = i;
                break;
            }
        }
        printf("TERM %d IS ", n);
        if(l % 2 == 1)
        {
            printf("%d/%d\n", 1+s-n, l-(s-n));
        }
        else
        {
            printf("%d/%d\n", l-(s-n), 1+s-n);
        }
    }
    return 0;
}
