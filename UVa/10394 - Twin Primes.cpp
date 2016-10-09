#include <bits/stdc++.h>
using namespace std;
long long int p[110000002], p_p[10000005], a[10000005][2];
void siv()
{
    long long int N = 110000002, sq=sqrt(N), i, j,  x=1, r=1;
    for(i=1; i<=N; i++)
    {
        p[i] =0;
    }
    for(i=4; i<=N; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i] == 0)
        {
            for(j=i*i; j<=N; j+=i)
            {
                p[j]=1;
            }
        }
    }
    p[1] = 1;
    p[0] = 1;
    for(i=1; i<110000002; i++)
    {
        if(p[i] == 0)
        {
            p_p[x++] = i;
        }
    }
    for(i=1; i<x; i++)
    {
        if(p_p[i] + 2 == p_p[i+1])
        {
            a[r][0] = p_p[i];
            a[r][1] = p_p[i+1];
            r++;
        }
    }
}
int main()
{
    long long int n;
    siv();
    while(cin >> n)
    {
        printf("(%lld, %lld)\n", a[n][0], a[n][1]);
    }
    return 0;
}
