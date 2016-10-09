#include <bits/stdc++.h>
using namespace std;
int p[1100002][2] = {0};
void siv()
{
    int N = 1100002, sq=sqrt(N), i, j;

    for(i=4; i<=N; i+=2)
    {
        p[i][0]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i][0] == 0)
        {
            for(j=i*i; j<=N; j+=i)
            {
                p[j][0]=1;
            }
        }
    }
    p[1][0] = 1;
    p[0][0] = 1;
}
int main()
{
    int n, i, j, k, c;
    siv();
    while(scanf("%d", &n)==1)
    {

        if(n == 0)
        {
            break;
        }
        c = 0;
        for(i=1; i<=n; i++)
        {
            p[i][1] = 0;
        }
        for(i=1; i<=n; i++)
        {
            j = n - i;
            if(p[i][0] == 0 && p[j][0] == 0 && p[i][1] == 0 && p[j][1] == 0)
            {
                p[i][1] = 1;
                p[j][1] = 1;
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
