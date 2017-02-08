#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t=1, flg, ans, j, c, fq[26];
    string s;
    while(scanf("%d", &n)==1)
    {
        ans = 0;
        for(i=1; i<=n; i++)
        {
            cin >> s;
            c = 0;
            flg = 0;
            memset(fq, 0, sizeof fq);
            for(j=0; j<s.size(); j++)
            {
               if(fq[s[j]-'a']==0)
               {
                   c++;
               }
               fq[s[j]-'a']++;
            }
            if(c < 2)
            {
                flg = 1;
                continue;
            }
            sort(fq, fq+26);
            for(j=0; j<25; j++)
            {
                if(fq[j]==fq[j+1] && fq[j]!=0)
                {
                    flg = 1;
                    break;
                }
            }
            if(!flg)
            {
                ans++;
            }
        }
        printf("Case %d: %d\n", t++, ans);
    }
    return 0;
}
