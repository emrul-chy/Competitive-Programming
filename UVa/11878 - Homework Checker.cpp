#include <bits/stdc++.h>
using namespace std;
int sum(char ch[])
{
    int i, y = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        y = (y * 10 + ch[i] - 48);
    }
    return y;
}
int main()
{
    int a, c=0,b, s, ss;
    char ch, sc[1100];
    while(scanf("%d%c%d=",&a, &ch, &b)==3)
    {
        cin >> sc;
        if(strcmp(sc, "?")!=0)
        {
            ss = sum(sc);
            if(ch=='+')
            {
                if(a+b==ss)
                {
                    c++;
                }
            }
            if(ch=='-')
            {
                if(a-b==ss)
                {
                    c++;
                }
            }
            if(ch=='/')
            {
                if(a/b==ss)
                {
                    c++;
                }
            }
            if(ch=='*')
            {
                if(a*b==ss)
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
