// Bismillahir Rahmanir Rahim
// Mr_Emrul

#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
typedef pair <int, pii> pip;
const ll MX = 1000005;

int a[11] = {1, 1};

void precall()
{
    int i, j;
    for(i=2; i<=10; i++)
    {
        for(j=0; j<i; j++)
        {
            a[i] += a[j]*a[i-j-1];
        }
    }
}

int main()
{
    int n, f=0;
    precall();
    while(scanf("%d", &n) == 1)
    {
        if(f)
            puts("");
        f = 1;
        printf("%d\n", a[n]);
    }
    return 0;
}
