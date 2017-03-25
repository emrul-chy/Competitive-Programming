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

int a[9][9];
char str[10];

void dfs(int n, int x)
{
    str[x] = n + '0';
    if(x == 8)
        printf("%s\n", str);
    for(int i=1; i<=5; i++)
    {
        if(a[n][i])
        {
            a[i][n] = 0;
            a[n][i] = 0;
            dfs(i, x+1);
            a[i][n] = 1;
            a[n][i] = 1;
        }
    }
}

int main()
{
    a[1][2] = 1;
    a[1][3] = 1;
    a[1][5] = 1;
    a[2][1] = 1;
    a[2][3] = 1;
    a[2][5] = 1;
    a[3][1] = 1;
    a[3][2] = 1;
    a[3][4] = 1;
    a[3][5] = 1;
    a[4][3] = 1;
    a[4][5] = 1;
    a[5][1] = 1;
    a[5][2] = 1;
    a[5][3] = 1;
    a[5][4] = 1;
    str[9] = '\0';
    dfs(1, 0);
    return 0;
}
