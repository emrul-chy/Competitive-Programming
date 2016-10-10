#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void rev(char str[])
{
    int i,l;
    char t;
    l = strlen(str) - 1;
    for(i=0; i<l; i++ )
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
        l--;
    }
}
int main()
{
    char s[100], b[100], c[100], d[100];
    while(cin>>b)
    {
        int i, l = strlen(b),cc=0;
        strcpy(c, b);
        rev(b);
        if(strcmp(b, c) == 0)
        {
            for(i=0; i<l; i++)
            {
                if(c[i] == 'U' || c[i]== 'A' || c[i]== 'H' || c[i]== 'I' || c[i] == 'M' || c[i] == 'O' || c[i] == 'W' || c[i] == 'T' || c[i] == 'V'|| c[i]=='X'||c[i]=='Y'||c[i]=='8')
                {
                    cc++;
                }
            }
            if(cc < l)
            {
                printf("%s -- is a regular palindrome.\n\n",b);
            }
            else if(cc == l)
            {
                printf("%s -- is a mirrored palindrome.\n\n",b);
            }
        }
        else if(strcmp(c, b) != 0)
        {
            for(i=0; i<l; i++)
            {
                 if(b[i]=='2')
                    b[i]='S';
                else if(b[i]=='3')
                    b[i]='E';
                else if(b[i]=='5')
                    b[i]='Z';
                else if(b[i]=='J')
                    b[i]='L';
                else if(b[i]=='L')
                    b[i]='J';
                else if(b[i]=='S')
                    b[i]='2';
                else if(b[i]=='E')
                    b[i]='3';
                else if(b[i]=='Z')
                    b[i]='5';
            }
            if(strcmp(c,b)==0)
            {

                printf("%s -- is a mirrored string.\n\n",c);
            }
            else
            {
                printf("%s -- is not a palindrome.\n\n",c);
            }
        }
    }
    return 0;
}
