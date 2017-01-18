#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n), n)
    {
        printf("%d\n", (int)floor(log2(n)));
    }

    return 0;
}
