#include <bits/stdc++.h>
#define LL long long int
using namespace std;
LL ar[100050];

LL solve(LL n)
{
    LL sum=0;
    LL i, mx=0;
    for(i=0; i<n; i++)
    {
        sum+=ar[i];
        mx = max(sum, mx);
        sum = max(sum, (LL) 0);
    }
    return mx;
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        LL c = 0;
        stringstream ss(s);
        while(ss >> ar[c++]);
        printf("%lld\n", solve(c-1));
    }
    return 0;
}
