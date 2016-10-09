#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, L, s, i, j, ct;
    while(cin>>a>>b>>c>>d>>L)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && L == 0)
        {
            break;
        }
        ct = 0;
        for(i=0; i<=L; i++)
        {
            s = a * i * i + b * i + c;
            if(s % d == 0)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
