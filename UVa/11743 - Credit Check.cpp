#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, s, j, m;
    char a[10], b[10], c[10], d[10];
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        s=0;
        cin>>a>>b>>c>>d;
        for(j=0; j<4; j++)
        {
            if(a[j] >= '0' && a[j] <= '9')
            {
                n = a[j] - '0';
                if(j % 2 != 1)
                {
                    m = n * 2;
                    if(m > 9)
                    {
                        int t = m / 10;
                        m = m % 10;
                        s = s + m + t;
                    }
                    else
                    {
                        s += m;
                    }
                }
                else
                {
                    s += n;
                }
            }
            if(b[j] >= '0' && b[j] <= '9')
            {
                n = b[j] - '0';
                if(j % 2 != 1)
                {
                    m = n * 2;
                    if(m > 9)
                    {
                        int t = m / 10;
                        m = m % 10;
                        s = s + m + t;
                    }
                    else
                    {
                        s += m;
                    }
                }
                else
                {
                    s += n;
                }
            }
            if(c[j] >= '0' && c[j] <= '9')
            {
                n = c[j] - '0';
                if(j % 2 != 1)
                {
                    m = n * 2;
                    if(m > 9)
                    {
                        int t = m / 10;
                        m = m % 10;
                        s = s + m + t;
                    }
                    else
                    {
                        s += m;
                    }
                }
                else
                {
                    s += n;
                }
            }
            if(d[j] >= '0' && d[j] <= '9')
            {
                n = d[j] - '0';
                if(j % 2 != 1)
                {
                    m = n * 2;
                    if(m > 9)
                    {
                        int t = m / 10;
                        m = m % 10;
                        s = s + m + t;
                    }
                    else
                    {
                        s += m;
                    }
                }
                else
                {
                    s += n;
                }
            }
        }
        if(s % 10 == 0)
        {
            cout<<"Valid\n";
        }
        else
        {
            cout<<"Invalid\n";
        }
    }
    return 0;
}
