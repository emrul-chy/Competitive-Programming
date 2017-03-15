#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int T;
    while(scanf("%d", &T), T)
    {
        int cnt = 0, a, b;
        map <pair <int, int>, int> mp;
        while(T--)
        {
            scanf("%d %d", &a, &b);
            if(mp[make_pair(b, a)] == 1)
            {
                cnt--;
            }
            else
            {
                cnt++;
                mp[make_pair(a, b)] = 1;
            }
        }
        printf((!cnt) ? "YES\n" : "NO\n");
    }
    return 0;
}
