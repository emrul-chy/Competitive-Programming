#include <bits/stdc++.h>
using namespace std;

#define ll  long long int

ll p[100005];
void siv()
{
    ll N = 100005, sq=sqrt(N), i, j;
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
    string s;
    siv();
    while(cin >> s)
    {
        if(s.compare("0")==0) break;
        ll i, j, sum = 0, mx = 0;
        ll l = s.size();
        for(i=0; i<l; i++)
        {
            sum = 0;
            for(j=i; j<l; j++)
            {
                sum = (sum * 10) + (s[j] - '0');
                if(sum > 100000)
                {
                    break;
                }
                if(sum <= 100000)
                {
                    if(p[sum] == 0)
                    mx = max(mx, sum);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
