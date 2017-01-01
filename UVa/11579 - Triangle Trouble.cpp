#include <bits/stdc++.h>
using namespace std;

#define ll  long long int

double area(double a, double b, double c)
{
    if(a + b < c || b + c < a || c + a < b)
    {
        return 0;
    }
    double s = (a + b + c) / 2;
    double ar = sqrt(s * (s - a)*(s - b)*(s - c));
    return ar;
}

int main()
{
    vector <double> v;
    ll t, n, i;
    double ans = 0.0, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ans = 0.0;
        for(i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(i=0; i<n-2; i++)
        {
            ans = max(ans, area(v[i], v[i+1], v[i+2]));
        }
        printf("%.2lf\n", ans);
        v.clear();
    }
    return 0;
}
