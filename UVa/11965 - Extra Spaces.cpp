#include <bits/stdc++.h>
#include <string.h>
#define LL long long int
using namespace std;

int main()
{
    int T, n, j = 1, i, l;
    char s[505];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        getchar();
        if(j != 1)
        {
            printf("\n");
        }
        printf("Case %d:\n", j++);
        while(n--)
        {
            gets(s);
            l = strlen(s);
            for(i=0; i<l; i++)
            {
                printf("%c", s[i]);
                if(s[i] == ' ')
                {
                    while(s[i] == ' ')
                    {
                        i++;
                    }
                    i--;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
