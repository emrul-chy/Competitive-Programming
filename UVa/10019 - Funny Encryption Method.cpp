#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int bd(int n)
{
    int c = 0, k;
    while(n > 0)
    {
        k = n % 2;
        if(k == 1)
        {
            c++;
        }
        n /= 2;
    }
    return c;
}
int bh(int n)
{
    stringstream ss;
    ss << n;
    string str = ss.str();
    int l, i, c=0;
    l = sizeof(str);
    for(i=0; i<=l; i++)
    {
        switch(str[i])
        {
        case '0':
            break;
        case '1':
            c++;
            break;
        case '2':
            c++;
            break;
        case '3':
            c +=2;
            break;
        case '4':
            c++;
            break;
        case '5':
            c +=2;
            break;
        case '6':
            c +=2;
            break;
        case '7':
            c +=3;
            break;
        case '8':
            c++;
            break;
        case '9':
            c +=2;
            break;
        }
    }
    return c;
}
int main()
{
    int i, t, n, a, b;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        a = bd(n);
        b = bh(n);
        printf("%d %d\n", a, b);
    }
    return 0;
}
