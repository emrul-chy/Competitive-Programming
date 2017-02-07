#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, j=1, n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        printf("Case #%d: %d\n", j++, (a-1)*2 + 1);
    }
    return 0;
}
