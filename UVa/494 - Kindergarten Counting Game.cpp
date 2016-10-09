#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, l, c, w;
    char s[100000];
    while(gets(s))
    {
        l = strlen(s);
        c = 0;
        w = 0;
        s[l] = ' ';
        for(i=0; ; i++)
        {
            if((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z'))
            {
                c++;
            }
            else
            {
                if(c>0)
                {
                    w++;
                    c = 0;
                }
            }
            if(i > l)
            {
                break;
            }
        }
        cout<<w<<endl;
    }
    return 0;
}
