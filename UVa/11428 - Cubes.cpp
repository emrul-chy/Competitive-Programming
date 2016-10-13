#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, f, j, x, y;
    while(cin >> n && n != 0)
    {
        f = 0;
        for(i=1; i<60; i++)
        {
            for(j=1; j<=i; j++)
            {
                if((i * i * i) - (j * j * j) == n)
                {
                    x = i;
                    y = j;
                    f = 1;
                    break;
                }
            }
            if(f == 1)
            {
                break;
            }
        }
        if(f == 1)
        {
            printf("%d %d\n", x, y);
        }
        else if(f == 0)
        {
            printf("No solution\n");
        }
    }
    return 0;
}
