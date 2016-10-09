#include <bits/stdc++.h>
using namespace std;
int p[1100002];
int p_p(int n)
{
    int p = 0, r, in, c = 0;
    in = n;
    while( n!=0 )
    {
        r = n%10;
        p = p*10 + r;
        n /= 10;
    }

    if (in == p)
        c =1;
    return c;
}
void siv()
{
    int N = 1100002, sq=sqrt(N), i, j;
    for(i=1; i<=100; i++)
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
}
int main()
{
    int n;
    long long ans;
    siv();
    while(cin >> n)
    {
        ans = n * 2;
        cout << ans << "\n";
        if(p[n] == 0 && p_p(n)==1)
        {
            break;
        }
    }
    return 0;
}
