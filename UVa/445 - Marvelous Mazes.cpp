#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    char s;
    n = 0;
    while(s = getchar())
    {
        if(s == EOF) break;
        if(s == '\n' || s == '!') printf("\n");
        else if(s >= '1' && s <= '9')
        {
            n += s - '0';
        }
        else
        {
            if(s == 'b')
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
                    printf("%c", s);
                }
            }
            n = 0;
        }
    }
    return 0;
}
