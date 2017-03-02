#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    int T=1, s, b;
    while(scanf("%d %d", &s, &b) == 2)
    {
        if(!s && !b)
        {
            break;
        }
        printf("Case %d: ", T++);
        if(!s || s == 1)
        {
            printf(":-\\");
        }
        else if(b >= s)
        {
            printf(":-|");
        }
        else if(b < s)
        {
            printf(":-(");
        }
        printf("\n");
    }
    return 0;
}
