#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i=1, s, t;
    while(cin>>n)
    {
        printf("%4d.", i);
        if(n==0)
        {
            printf(" 0");
        }
        if(n / 10000000 >0)
        {
            t = n / 10000000;
            if(t / 10000000 >0)
            {
                s = t / 10000000;
                printf(" %lld kuti", s);
                t = t % 10000000;
            }
            if(t / 100000 > 0)
            {
                s = t / 100000;
                printf(" %lld lakh", s);
                t = t % 100000;
            }
            if(t / 1000 >0)
            {
                s = t / 1000;
                printf(" %lld hajar", s);
                t = t % 1000;
            }
            if(t / 100 > 0)
            {
                s = t / 100;
                printf(" %lld shata", s);
                t = t % 100;
            }
            if(t<100 && t >0)
            {
                printf(" %lld", t);
            }
            printf(" kuti");
            n = n % 10000000;
        }
        if(n / 100000 > 0)
        {
            t = n / 100000;
            if(t / 10000000 >0)
            {
                s = t / 10000000;
                printf(" %lld kuti", s);
                t = t % 10000000;
            }
            if(t / 100000 > 0)
            {
                s = t / 100000;
                printf(" %lld lakh", s);
                t = t % 100000;
            }
            if(t / 1000 >0)
            {
                s = t / 1000;
                printf(" %lld hajar", s);
                t = t % 1000;
            }
            if(t / 100 > 0)
            {
                s = t / 100;
                printf(" %lld shata", s);
                t = t % 100;
            }
            if(t<100 && t >0)
            {
                printf(" %lld", t);
            }
            printf(" lakh");
            n = n % 100000;
        }
        if(n / 1000 >0)
        {
            t = n / 1000;
            if(t / 10000000 >0)
            {
                s = t / 10000000;
                printf(" %lld kuti", s);
                t = t % 10000000;
            }
            if(t / 100000 > 0)
            {
                s = t / 100000;
                printf(" %lld lakh", s);
                t = t % 100000;
            }
            if(t / 1000 >0)
            {
                s = t / 1000;
                printf(" %lld hajar", s);
                t = t % 1000;
            }
            if(t / 100 > 0)
            {
                s = t / 100;
                printf(" %lld shata", s);
                t = t % 100;
            }
            if(t<100 && t >0)
            {
                printf(" %lld", t);
            }
            printf(" hajar");
            n = n % 1000;
        }
        if(n / 100 > 0)
        {
            t = n / 100;
            if(t / 10000000 >0)
            {
                s = t / 10000000;
                printf(" %lld kuti", s);
                t = t % 10000000;
            }
            if(t / 100000 > 0)
            {
                s = t / 100000;
                printf(" %lld lakh", s);
                t = t % 100000;
            }
            if(t / 1000 >0)
            {
                s = t / 1000;
                printf(" %lld hajar", s);
                t = t % 1000;
            }
            if(t / 100 > 0)
            {
                s = t / 100;
                printf(" %lld shata", s);
                t = t % 100;
            }
            if(t<100 && t >0)
            {
                printf(" %lld", t);
            }
            printf(" shata");
            n = n % 100;
        }
        if(n > 0)
        {
            printf(" %lld", n);
        }
        printf("\n");
        i++;
    }
    return 0;
}
