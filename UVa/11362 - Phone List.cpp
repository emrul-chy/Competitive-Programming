#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        char str[15], s[15];
        map <string, int> mp, fq;
        scanf("%d", &n);
        int l, i, flg = 0;
        while(n--)
        {
            scanf("%s", str);
            if(!flg)
            {
                l = strlen(str);
                if(fq[str] == 1)
                {
                    flg = 1;
                    continue;
                }
                for(i=0; i<l; i++)
                {
                    s[i] = str[i];
                    s[i+1] = '\0';
                    if(mp[s])
                    {
                        flg = 1;
                        break;
                    }
                    fq[s] = 1;
                }
            }
            mp[str] = 1;
        }
        printf((!flg) ? "YES\n" : "NO\n");
    }
    return 0;
}
