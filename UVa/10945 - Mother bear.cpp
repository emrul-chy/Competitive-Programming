#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[500], str2[500];
    int i, j;
    while(gets(str1))
    {
        if(strcmp(str1, "DONE") == 0)
        {
            break;
        }
        i=j=0;
        for(i=0; str1[i] != '\0'; i++)
        {
            if((str1[i]>= 'a' && str1[i] <= 'z'))
            {
                str1[j] = str1[i];
                j++;
            }
            else if(str1[i] >= 'A' && str1[i]<='Z')
            {
                str1[j] = str1[i] + 32;
                j++;
            }
        }
        str1[j] = '\0';
        j = j-1;
        for(i=0; str1[i]!='\0'; i++)
        {
            str2[i] = str1[j];
            j--;
        }
        str2[i] = '\0';
        if(strcmp(str1,str2)==0)
        {
            cout<<"You won't be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
