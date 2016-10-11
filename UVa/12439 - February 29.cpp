#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, k=0, j, i=0, m, n, ans, c, a, b, x, y;
    char s1[20], s2[20];
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %lld, %lld", s1, &a, &b);
        scanf("%s %lld, %lld", s2, &x, &y);
        c = 0;
        if(strcmp(s1, "January")==0)
        {
            m = 1;
        }
        else if(strcmp(s1, "February")==0)
        {
            m = 2;
        }
        else if(strcmp(s1, "March")==0)
        {
            m = 3;
        }
        else if(strcmp(s1, "April")==0)
        {
            m = 4;
        }
        else if(strcmp(s1, "May")==0)
        {
            m = 5;
        }
        else if(strcmp(s1, "June")==0)
        {
            m = 6;
        }
        else if(strcmp(s1, "July")==0)
        {
            m = 7;
        }
        else if(strcmp(s1, "August")==0)
        {
            m = 8;
        }
        else if(strcmp(s1, "September")==0)
        {
            m = 9;
        }
        else if(strcmp(s1, "October")==0)
        {
            m = 10;
        }
        else if(strcmp(s1, "November")==0)
        {
            m = 11;
        }
        else if(strcmp(s1, "December")==0)
        {
            m = 12;
        }
        if(strcmp(s2, "January")==0)
        {
            n = 1;
        }
        else if(strcmp(s2, "February")==0)
        {
            n = 2;
        }
        else if(strcmp(s2, "March")==0)
        {
            n = 3;
        }
        else if(strcmp(s2, "April")==0)
        {
            n = 4;
        }
        else if(strcmp(s2, "May")==0)
        {
            n = 5;
        }
        else if(strcmp(s2, "June")==0)
        {
            n = 6;
        }
        else if(strcmp(s2, "July")==0)
        {
            n = 7;
        }
        else if(strcmp(s2, "August")==0)
        {
            n = 8;
        }
        else if(strcmp(s2, "September")==0)
        {
            n = 9;
        }
        else if(strcmp(s2, "October")==0)
        {
            n = 10;
        }
        else if(strcmp(s2, "November")==0)
        {
            n = 11;
        }
        else if(strcmp(s2, "December")==0)
        {
            n = 12;
        }
        if( m > 2 || (m == 2 && a > 29))
        {
            b++;
        }
        if( n < 2 || (n == 2 && x < 29))
        {
            y--;
        }
        for(j=b; ;j++)
        {
            if(j % 400 == 0 || (j %  4 == 0 && j % 100 != 0))
            {
                b = j;
                break;
            }
        }
        for(j=y; ;j--)
        {
            if(j % 400 == 0 || (j %  4 == 0 && j % 100 != 0))
            {
                y = j;
                break;
            }
        }
        ans = (y/4- y/100 + y/ 400) - (b/4 - b/100 + b/400);
        printf("Case %lld: %lld\n", i, ans+1);
    }
    return 0;
}
