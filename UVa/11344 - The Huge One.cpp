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

int solve( string str, int n )
{
    int i, l=str.size(), sum = 0;
    for(i=0; i<l; i++)
    {
        sum = sum * 10 + (str[i] - '0');
        sum %= n;
    }
    return !sum ? 0 : 1;
}

int main()
{
    int t, tc, n, f, a[14], i, j;
    string str;
    scanf("%d", &t);
    while(t--)
    {
        cin >> str;
        scanf("%d", &n);
        f=0, j=0;
        while(n--)
        {
            scanf("%d", &a[j++]);
        }
        for(i=0; i<j; i++)
        {
            f = solve(str, a[i]);
            if(f)
                break;
        }
        printf("%s - ", str.c_str());
        !f ? printf("Wonderful.\n") : printf("Simple.\n");
    }
    return 0;
}
