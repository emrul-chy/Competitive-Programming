#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll LL = 9876543210LL;

int ifD(ll n)
{
    char dgt[10] = {0}, s[11], i = 0;
    
    sprintf(s, "%lld", n);

    while(s[i] != '\0')
    {
        dgt[s[i]-'0']++;
        
        if(dgt[s[i]-'0'] == 2)
        {
            return 0;
        }
        
        i++;
    }
    return 1;
}
int main()
{
    ll T, n, m, i;
    cin >> T;

    while(T--)
    {
        cin >> n;

        for(i = 1; n*i <= LL; i++)
        {
            m = n * i;
            if(ifD(i) == 1 && ifD(m) == 1)
            {
                printf("%lld / %lld = %lld\n", m, i, n);
            }
        }

        if(T != 0) printf("\n");
    }
    return 0;
}
