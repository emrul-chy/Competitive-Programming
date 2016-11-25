#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, i, l,c = 0, m, n, d;
    int ar[100005] = {0};
    cin >> k >> l >> m >> n >> d;
    for(i=k; i<=d; i+=k)
    {
        if(ar[i] == 0)
        {
            c++;
            ar[i] = 1;
        }
    }
    for(i=l; i<=d; i+=l)
    {
        if(ar[i] == 0)
        {
            c++;
            ar[i] = 1;
        }
    }
    for(i=m; i<=d; i+=m)
    {
        if(ar[i] == 0)
        {
            c++;
            ar[i] = 1;
        }
    }
    for(i=n; i<=d; i+=n)
    {
        if(ar[i] == 0)
        {
            c++;
            ar[i] = 1;
        }
    }
    cout << c << endl;
}

