#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        n--;
        printf("%d\n", n + (int)log2(n));
    }
    return 0;
}
