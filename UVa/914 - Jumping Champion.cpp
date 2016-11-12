#include <bits/stdc++.h>
using namespace std;
int p[1100002], prime[1000000], nP =2;
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
    prime[0] = -1;
    p[0] = 1;

    for(i=3; i<=N; i++)
    {
        if(p[i] == 0)
        {
            prime[nP] = i;
            p[i] = nP;
            nP++;
        }
        else
        {
            p[i] = -1;
        }
    }
    prime[1] = 2;
    p[2] = 1;
}
int main()
{
    int T, a, b,ans, mk[100005],ar[100005];
    siv();
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        memset(mk, 0, sizeof(mk));
        int j=0,i, k =0,flg=1,cs=0, sc =0,mx = 0;
        if(p[a]==-1)
        {
            for(i=a; i<=b; i++)
            {
                if(p[i] != -1)
                {
                    a = i;
                    cs = 1;
                    break;
                }
            }
        }
        else
        {
            cs = 1;
        }
        if(p[b]==-1)
        {
            for(i=b; i>=a; i--)
            {
                if(p[i] != -1)
                {
                    b = i;
                    sc = 1;
                    break;
                }
            }
        }
        else
        {
            sc = 1;

        }
        if(sc == 0 && cs == 0)
        {
            printf("No jumping champion\n");
            continue;
        }

        else
        {
            for(i=p[a]; i<=p[b]; i++)
            {
                j++;
                if(j != 1)
                {
                    ar[k] = prime[i] - prime[i-1];
                    mk[ar[k]]++;
                    if(mk[ar[k]] >= mx)
                    {
                        if(mx == mk[ar[k]])
                        {
                            flg = 1;
                        }
                        else
                        {
                            flg = 0;
                        }
                        mx = mk[ar[k]];
                        ans = ar[k];
                    }
                    k++;
                }
            }
        }
        if(j == 1 || flg == 1 || j == 0)
        {
            printf("No jumping champion\n");
        }
        else
        {
            printf("The jumping champion is %d\n", ans);
        }
    }
    return 0;
}
