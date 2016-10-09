#include <bits/stdc++.h>
using namespace std;
int p[1100002];
void siv()
{
    int N = 1100002, sq=sqrt(N), i, j;
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
    int n, d, r;
    siv();
    while(scanf("%d", &n)==1)
    {
        if(n == 0)
        {
            break;
        }

        d = 0;
        int i, j, a=0, b=0, c = 0;;
        for(i=1; i<=n; i++)
        {
            j = n - i;
            if(p[i] == 0 && p[j] == 0)
            {
                if(abs(j - i) >= d)
                    a = i;
                b = j;
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            printf("%d:\nNO WAY!\n", n);
        }
        else
        {
            printf("%d:\n%d+%d\n", n, a, b);
        }
    }
    return 0;
}
