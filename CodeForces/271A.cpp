#include <bits/stdc++.h>
using namespace std;

int dgt_chk(int n)
{
    int x, r, ar[10]={0};
    x = n;
    while(n > 0)
    {
        r = n % 10;
        n /= 10;
        ar[r]++;
        if(ar[r] > 1)
        {
            break;
        }
    }
    if(ar[r] > 1) return dgt_chk(x+1);
    else return x;
}

int main()
{
    int n;
    cin >> n;
    cout << dgt_chk(n+1);
}
