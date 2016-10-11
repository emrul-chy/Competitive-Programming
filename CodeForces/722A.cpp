#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f, a, b, m, h;
    cin >> f;
    scanf("%d:%d", &a, &b);
    if(f == 24)
    {
        if(a < 23)
        {
            h = a;
        }
        else if(a > 23)
        {
            h = a % 10;
        }
        if(b < 59)
        {
            m = b;
        }
        else if(b > 59)
        {
            m = b % 10;
        }
    }
    else if(f == 12)
    {
        if(a < 13 && h >0)
        {
            h = a;
        }
        else if(a > 12)
        {
            h = a % 10;
        }
        if(h <= 0)
        {
            h = 10;
        }
        if(b <= 59)
        {
            m = b;
        }
        else if(b > 59)
        {
            m = b % 10;
        }
    }
    if(h < 10)
    {
        printf("0%d:", h);
    }
    else
    {
        printf("%d:", h);
    }
    if(m < 10)
    {
        printf("0%d\n", m);
    }
    else
    {
        printf("%d\n", m);
    }
    return 0;
}
