#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100005], b[100005];
    string x, y;
    int T, i, j, l, flg;
    while(gets(a) != '\0')
    {
        gets(b);
        if(a[0] != b[0])
        {
            printf("no\n");
            continue;
        }
        x = "", y = "";
        l = strlen(a);
        for(i=0; i<l; i++)
        {
            flg = 0;
            while(a[i] != ' ')
            {
                if(!flg)
                {
                    x += a[i];
                }
                flg = 1;
                i++;
            }
        }
        l = strlen(b);
        for(i=0; i<l; i++)
        {
            flg = 0;
            while(b[i] != ' ')
            {
                if(!flg)
                {
                    y += b[i];
                }
                flg = 1;
                i++;
            }
            if(y[y.size()-1] != x[y.size()-1])
            {
                break;
            }
        }
        if(x == y)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
