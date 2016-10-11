#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[270];
    int n, i,r=0, c=0,j, mx=0, w=0;
    cin >> n;
    getchar();
    gets(s);
    s[n] ='\n';
    strlwr(s);
    for(i=0; i<n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            c++;
            if(c > 0)
            {
                if(c > mx)
                {
                    mx = c;
                }

            }
        }
        else if(s[i] == '_')
        {
            c=0;
        }
        else if(s[i] == '(')
        {
            c=0;
            for(j=i; ; j++)
            {
                if(s[j] != ')')
                {
                    i++;
                }
                if(s[j] >= 'a' && s[j] <= 'z')
                {
                    r++;
                }
                else if(s[j] == '_' || s[j] == ')')
                {
                    if(r > 0)
                    {
                        w++;
                        r=0;
                    }
                    if(s[j] == ')')
                    {
                        break;
                    }
                }
            }
        }
    }
    cout << mx << " " << w << "\n";
    return 0;
}
