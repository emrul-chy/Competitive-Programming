#include <bits/stdc++.h>
#define LL long long int
using namespace std;

#define MX 20005

int n, i;
int ar[MX];

void input()
{
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
}

void solve()
{
    sort(ar, ar+n);
    int sum = 0;
    for(i = n % 3; i<n; i+=3)
    {
        sum += ar[i];
    }
    printf("%d\n", sum);
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        input();
        solve();
    }
    return 0;
}
