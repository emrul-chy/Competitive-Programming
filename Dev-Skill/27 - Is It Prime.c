#include <bits/stdc++.h>
using namespace std;

int p[11000];
void siv()
{
    int N = 11000, sq=sqrt(N), i, j;
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
}

int main()
{
    long long j, n, t, mx=0, mn, i=0;
    cin >> t;
    siv();
    for(j = 1; j<=t; j++)
    {
        cin>>n;
        if(p[n] == 0) printf("Yes\n");
        else printf("No\n");
    }
}
