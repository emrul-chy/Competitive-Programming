#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[82], c[100];
    c['0']='O', c['1']= 'I', c['2'] ='Z', c['3'] = 'E', c['4'] = 'A', c['5'] = 'S', c['6'] = 'G', c['7'] = 'T', c['8'] = 'B', c['9'] = 'P';
    int t, i, j;
    cin >> t;
    getchar();
    for(i=0; i<t; i++)
    {
        while(gets(s))
        {
            if(strlen(s) == 0)
            {
                break;
            }
            for(j=0; s[j] != '\0'; j++)
            {
                if(s[j] >= '0' && s[j] <= '9')
                {
                    s[j] = c[s[j]];
                }
                printf("%c", s[j]);
            }
            printf("\n");
        }
        if(i != t- 1)
        {
            printf("\n");
        }
    }
    return 0;
}
