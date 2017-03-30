#include <bits/stdc++.h>
using namespace std;

vector <int> ar;

bool check(int n, int l, int p)
{
    for(int i=0; i<n; i++)
    {
        p -= (ar[i]+l-1)/l;
        if( p < 0 )
            return false;
    }
    return true;
}

int main()
{
    int n, p, l, r, m, i, x, ans;
    while(scanf("%d %d", &p, &n) == 2)
    {
        ans = INT_MAX;
        ar.clear();
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            ar.push_back(x);
        }
        l = 1, r = 10000;
        while( l <= r )
        {
            m = ( l + r ) / 2;
            if(check(n, m, p))
            {
                ans = min(ans, m);
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
          //  cout << l << " " << r << endl;
        }
        printf("%d\n", ans);
    }
    return 0;
}
