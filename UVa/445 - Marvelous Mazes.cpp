#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k=0;
    string s;
    while(cin >> s)
    {
        int n, flg = 0;
        n = 0;
        if(s[0] == EOF) break;
        if(s[0] == '\n' || s[0] == '!') printf("\n");
        k++;
        for(i=0; i<s.size(); i++)
        {
            if(s[i] >= '1' && s[i] <= '9')
            {
                n += s[i] - '0';
            }
            else
            {
                if(s[i] == '!')
                {
                    printf("\n");
                }
                if(s[i] == 'b')
                {
                    for(j=0; j<n; j++)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    for(j=0; j<n; j++)
                    {
                        printf("%c", s[i]);
                    }
                }
                n = 0;
            }
        }
    }
    return 0;
}
