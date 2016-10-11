#include <bits/stdc++.h>
#define MX 1000000000
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i % 2 != 0)
        {
            if(i == n)
            {
                printf("I hate it\n");
            }
            else
            {
                printf("I hate that ");
            }
        }
        else
        {
            if(i == n)
            {
                printf("I love it\n");
            }
            else
            {
                printf("I love that ");
            }
        }
    }
    return 0;
}
