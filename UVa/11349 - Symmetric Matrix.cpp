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

ll a[105][105], flg;

void solve(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] != a[n-i-1][n-j-1])
            {
                flg = 1;
                return;
            }
        }
    }
}

void input(int n)
{
    int i, j;
    flg = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lld", &a[i][j]);
            if(a[i][j] < 0)
                flg = 1;
        }
    }
}

int main()
{
    int t, tc, n;
    string a, b;
    scanf("%d", &t);
    for(tc=1; tc<=t; tc++)
    {
        cin >> a >> b;
        scanf("%d", &n);
        input(n);
        solve(n);
        printf("Test #%d: ", tc);
        if(flg)
            printf("Non-symmetric.\n");
        else
            printf("Symmetric.\n");
    }
    return 0;
}
