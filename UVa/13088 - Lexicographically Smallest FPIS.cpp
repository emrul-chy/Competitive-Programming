#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];
    int T, i, j, l;
    scanf("%d", &T);
    getchar();
    while(T--)
    {
        gets(s);
        l = strlen(s);
        sort(s, s+l);
        for(i=1; i<l-1; i++)
        {
            if(s[i] == s[i+1])
                s[i] = s[0];
        }
        sort(s, s+l);
        printf("%s\n", s);
    }
    return 0;
}
