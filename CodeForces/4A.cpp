#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for(i=2; i<=n; i+=2)
    {
        for(j=2; j<=n; j+=2)
        {
            if(i + j == n)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
