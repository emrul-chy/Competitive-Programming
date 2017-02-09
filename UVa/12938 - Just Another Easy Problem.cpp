#include <bits/stdc++.h>
#define LL long long int
using namespace std;

map <LL, LL> mp;

int main()
{
    LL T, i, x, j=1, c=0, n;
    string s, s1;
    cin >> T;
    while(T--)
    {
        cin >> s;
        c=0;
        for(i=0; i<s.size(); i++)
        {
            s1 = s;
            for(x='0'; x<='9'; x++)
            {
                if(x == '0' && i == 0)
                {
                    continue;
                }
                s1[i] = x;
                n = atoll(s1.c_str());
                if((LL)sqrt(n)*(LL)sqrt(n)==n)
                {
                    if(!mp[n] && s1 != s)
                    {
                        c++;
                        mp[n] = 1;
                    }
                }
            }
        }
        printf("Case %lld: %lld\n", j++, c);
        mp.clear();
    }
    return 0;
}
