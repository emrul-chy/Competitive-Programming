#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[10000], t[105];
    int c =0,l,i;
    while(cin>>s)
    {
        if(strcmp(s,"E-N-D")==0) break;
        l = strlen(s);
        if(l>c)
        {
            c = l;
            int k= 0;
            for(i=0; i<c; i++)
            {
                if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] =='-') t[k++] = s[i];
                else k =0;
            }
            if(t[l-1] == ',' || t[l-1] == '.' )
            {
                t[l-1] = '\0';
            }
        }
    }
    for(int i=0; i<c ; i++) t[i] = tolower(t[i]);
    printf("%s\n", t);
    return 0;
}
