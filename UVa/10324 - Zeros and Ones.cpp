#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s;
    ll t = 1;
    while(cin >> s)
    {
        ll q, i, j, b, e, flg = 0;
        cin >> q;
        printf("Case %lld:\n", t++);
        for(i=0; i<q; i++)
        {
            cin >> b >> e;
            flg = 0;
            if(b > e)
            {
                swap(b, e);
            }
            for(j=b+1; j<=e; j++)
            {
                if(s[j] != s[j-1])
                {
                    flg = 1;
                    printf("No\n");
                    break;
                }
            }
            if(flg == 0)
            {
                printf("Yes\n");
            }
        }
    }
    return 0;
}
