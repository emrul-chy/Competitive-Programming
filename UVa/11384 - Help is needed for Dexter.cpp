#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n)==1)
    {
        printf("%d\n", int(log2(n)+1));
    }
    return 0;
}
