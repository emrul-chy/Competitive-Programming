#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, j = 1, i, n, k, cnt;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> n >> k >> s;
        queue <char> q;
        map <char, LL> mp;
        cnt = 0;
        for(i=0; i<s.size(); i++)
        {
            if(mp[s[i]] >= 1)
            {
                cnt++;
            }
            mp[s[i]]++;
            if(q.size()>=k)
            {
                while(q.size()!=k-1)
                {
                    char x = q.front();
                    q.pop();
                    mp[x]--;
                }
            }
            q.push(s[i]);
        }
        printf("Case %lld: %lld\n", j++, cnt);
    }
    return 0;
}
