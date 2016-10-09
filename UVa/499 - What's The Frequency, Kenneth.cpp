#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[2000];
    int i, t,j, n[200], L[200];
    cin>>t;
    getchar();
    while(gets(s))
    {
        for(j=0; j<26; j++)
        {
            n[j] = 0;
            L[j] = 0;
        }
        int l = strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i] >= 'a' && s[i]<= 'z')
            {
                n[s[i]-97]++;
            }
            else if(s[i] >= 'A' && s[i]<= 'Z')
            {
                L[s[i]-65]++;
            }
        }
        int m = 0;
        for(i=0; i<26; i++)
        {
            if(L[i] > m)
            {
                m = L[i];
            }
            if(n[i] > m)
            {
                m = n[i];
            }
        }
        for(i=0; i<26; i++)
        {
            if(L[i] == m)
            {
                printf("%c", i + 65);
            }
        }
        for(i=0; i<26; i++)
        {
            if(n[i] == m)
            {
                printf("%c", i + 97);
            }
        }
        printf(" %d\n", m);
    }
    return 0;
}
