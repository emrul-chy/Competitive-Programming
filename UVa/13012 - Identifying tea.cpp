#include <stdio.h>
using namespace std;
int main()
{
    int i, n, c, a;
    while(scanf("%d", &n)==1)
    {
        c = 0;
        for(i=0; i<5; i++)
        {
            scanf("%d", &a);
            if(a == n)
            {
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
