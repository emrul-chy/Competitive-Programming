#include <bits/stdc++.h>
using namespace std;
map<int, int>mp;
int main()
{
    int n, m, j,l,s=0,c=0, r, i, ar[105];
    cin >> n >> m;
    for(i=1; i<=n; i++)
    {
        cin >> ar[i];
        s += ar[i];
    }
    for(i=0; i<m;  i++)
    {
        cin >> l >> r;
        int ans = s;
        for(j=l; j<=r; j++)
        {
            ans+=ar[j];
        }
        if(ans > s)
        {
            c+=ans-s;
        }
    }
    cout <<c <<endl;
}
