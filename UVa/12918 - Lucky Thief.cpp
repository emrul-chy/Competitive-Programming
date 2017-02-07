#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a*b) - (a*(a+1))/2);
    }
    return 0;
}
