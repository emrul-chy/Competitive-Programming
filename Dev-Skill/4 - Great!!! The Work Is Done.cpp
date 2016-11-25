#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int h, n, i, ar[1005];
    while(cin >> h >> n)
    {
        int c = 1, s = 0;
        for(i=0; i<n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        int ans = 0;
        while(h > 0)
        {
            h -= s;
            ans++;
        }
        if(ans == 1) printf("Project will finish within 1 day.\n");
        else printf("Project will finish within %d days.\n", ans);
    }
    return 0;
}
