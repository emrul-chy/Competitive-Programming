#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, tc=1, a, i, j, c;
    char s[1005];
    cin >> T;
    while(T--)
    {
        scanf("%s", s);
        a=0;
        int x = strlen(s);
        for(i=0; i<x; i++)
        {
            c=0;
            int fq[256]= {0};
            for(j=i; j<x; j++)
            {
                fq [s[j]-'a']++;
                if(fq [s[j]-'a'] % 2 == 1)
                {
                    c++;
                }
                else c--;
                int l = j - i + 1;
                if((l % 2 == 1) && c == 1)
                {
                    a++;
                }
                if((l % 2 == 0) && c == 0)
                {
                    a++;
                }
            }
        }
        printf("Case %d: %d\n", tc++, a);
    }
    return 0;
}
