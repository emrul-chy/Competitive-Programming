#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a1, b1, c1, a2, b2, c2, l, i, flg;
    char c[100000];
    cin >> t;
    getchar();
    while(t--)
    {
        gets(c);
        flg = 0;
        a2=b2=c2=a1=b1=c1=0;
        l = strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[0] == ']' || c[0] == ')' || c[0] == '}' || c[l-1] == '[' || c[l-1] == '(' || c[l-1] == '{')
            {
                flg = 1;
                break;
            }
            if(c[i] == '(')
            {
                a1++;
                if(c[i+1] == ']' || c[i+1] == '}')
                {
                    flg = 1;
                }
            }
            if(c[i] == '{')
            {
                b1++;
                if(c[i+1] == ')' || c[i+1] == ']')
                {
                    flg = 1;
                }
            }
            if(c[i] == '[')
            {
                c1++;
                if(c[i+1] == ')' || c[i+1] == '}')
                {
                    flg = 1;
                }
            }
            if(c[i] == ')')
            {
                a2++;
                if(c[i-1] == '[' || c[i-1] == '{')
                {
                    flg = 1;
                }
            }
            if(c[i] == '}')
            {
                b2++;
                if(c[i-1] == '(' || c[i-1] == '[')
                {
                    flg = 1;
                }
            }
            if(c[i] == ']')
            {
                c2++;
                if(c[i-1] == '(' || c[i-1] == '{')
                {
                    flg = 1;
                }
            }
        }
        if(a2 != a1 || b2 != b1 || c2 != c1)
        {
            flg = 1;
        }
        if(flg == 0)
        {
            printf("Yes\n");
        }
        else if(flg == 1)
        {
            printf("No\n");
        }
    }
    return 0;
}
