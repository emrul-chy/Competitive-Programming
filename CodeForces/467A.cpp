#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, c = 0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        if(b-a >= 2) c++;
    }
    cout << c;
    return 0;
}
