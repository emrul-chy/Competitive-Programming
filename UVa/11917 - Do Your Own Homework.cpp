#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, j = 1;
    cin >> T;
    while(T--)
    {
        map <string, int> mp, flg;
        string s;
        int n, d;
        cin >> n;
        while(n--)
        {
            cin >> s >> d;
            mp[s] = d;
            flg[s] = 1;
        }
        cin >> d;
        cin >> s;
        printf("Case %d: ", j++);
        if(!flg[s])
        {
            printf("Do your own homework!\n");
        }
        else
        {
            if(d <= mp[s])
            {
                printf("Yesss\n");
            }
            else
            {
                if(d+5 <= mp[s])
                {
                    printf("Late\n");
                }
                else
                {
                    printf("Do your own homework!\n");
                }
            }
        }
    }
    return 0;
}
