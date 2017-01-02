#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, a, ans, sum, i;
    while(cin >> n && n != 0)
    {
        priority_queue< ll, vector <ll>, greater<ll> > q;
        sum = 0;
        ans = 0;
        for(i=0; i<n; i++)
        {
            cin >> a;
            q.push(a);
        }
        while(q.size() > 1)
        {
            sum = q.top();
            q.pop();
            sum += q.top();
            q.pop();
            q.push(sum);
            ans += sum;
        }
        cout << ans << endl;
    }
    return 0;
}
