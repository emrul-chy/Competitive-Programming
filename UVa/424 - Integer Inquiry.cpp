#include <bits/stdc++.h>
using namespace std;

void rev(char str[])
{
    int i,l;
    char t;
    l = strlen(str) - 1;
    for(i=0; i<l; i++ )
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
        l--;
    }
}

int main()
{
    char ch[1000], t[1000], a[1000];
    int i, k=1, l, l1, j, c, s;
    while(gets(ch))
    {
        if(strlen(ch) == 1 && ch[0] == '0')
        {
            break;
        }
        rev(ch);
        if(k == 1)
        {
            strcpy(t, ch);
        }
        else
        {
            l = strlen(ch);
            l1 = strlen(t);
            c = 0;
            if(l1 > l)
            {
                for(i=l; i<l1; i++)
                {
                    ch[i] = '0';
                }
            }
            else if(l > l1)
            {
                for(i=l1; i<l; i++)
                {
                    t[i] = '0';
                }
            }
            l1  = max(l1, l);
            for(i=0; i<l1; i++)
            {
                if(t[i] >= '0' && t[i] <= '9' && ch[i] >= '0' && ch[i] <= '9')
                {
                    s = (t[0]-'0') * (ch[i] - '0');
                }
                s += c;
                if(s >= 10)
                {
                    c = s / 10;
                    a[i] = s % 10 + 48;
                }
                else
                {
                    a[i] = s + 48;

                    c = 0;
                }
            }
            if(c > 0)
            {
                while( c != 0)
                {
                    a[i] = (c % 10) + '0';
                    c /= 10;
                    i++;
                }
            }
            a[i] = '\0';
            strcpy(t, a);
        }
        k++;
        rev(a);
        cout << a << endl;

    }
    return 0;
}
