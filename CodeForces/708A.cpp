#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100002];
    int i;
    scanf("%s", s);
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]!='a')
            break;

    }
    if(i==strlen(s))
        if(s[i-1]=='a')
            s[i-1]='z';

    for(i; s[i]!=NULL; i++)
    {
        if(s[i]=='a')
            break;
        s[i]=s[i]-1;
    }
    puts(s);
    return 0;
}
