#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, t, n, sq;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        sq = sqrt(n);
        if(sq * sq == n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
