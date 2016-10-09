#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[2000];
    int i, t,j, n[200];
    cin>>t;
    getchar();
    for(int w=0; w<t; w++)
    {
        gets(s);
        for(j=0; j<26; j++)
        {
            n[j] = 0;
        }
        int l = strlen(s);
        for(i=0; i<l; i++)
        {
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i]<= 'z')
            {
                n[s[i]-97]++;
            }
        }
        int m = 0;
        for(i=0; i<26; i++)
        {
            if(n[i] > m)
            {
                m = n[i];
            }
        }
        for(i=0; i<26; i++)
        {
            if(n[i] == m)
            {
                printf("%c", i + 97);
            }
        }
        printf("\n");
    }
    return 0;
}
