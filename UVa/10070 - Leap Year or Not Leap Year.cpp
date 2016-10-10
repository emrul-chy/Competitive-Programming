#include <bits/stdc++.h>
using namespace std;
int mod(char ch[], int n)
{
    int m, i, y = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        y = (y * 10 + ch[i] - 48) % n;
    }
    return y;
}
char c[10000];
int main()
{
    int n, t, l, j=0, h, b;
    while(gets(c))
    {
        l =0, h=0, b=0, l=0;
        if(j != 0)
        {
            printf("\n");
        }
        if((mod(c, 400) == 0) ||(mod(c, 4) == 0 && mod(c, 100) != 0))
        {
            l = 1;
        }
        if(mod(c, 15) == 0)
        {
            h =1;
        }
        if(l == 1 && mod(c, 55) == 0)
        {
            b = 1;
        }
        if(h == 0 && l == 0 && b == 0)
        {
            printf("This is an ordinary year.\n");
        }
        if(l == 1)
        {
            printf("This is leap year.\n");
        }
        if(h == 1)
        {
            printf("This is huluculu festival year.\n");
        }
        if(b == 1)
        {
            printf("This is bulukulu festival year.\n");
        }
        j++;
    }
    return 0;
}
