#include <bits/stdc++.h>
using namespace std;

int vowel(char a)
{
    a = toupper(a);
    if((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U'))
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s, k;
    while(getline(cin, s))
    {
        k = "";
        for(int i=0; i<s.size(); i++)
        {
            int flg=1;
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                k += s[i];
                if(i != s.size() - 1)
                {
                    flg = 0;
                }
            }
            if(flg == 1)
            {
                if(k.size() > 0)
                {
                    if(vowel(k[0]) == 1)
                    {
                        for(int j=0; j<k.size(); j++)
                        {
                            printf("%c", k[j]);
                        }
                        printf("ay");
                    }
                    else
                    {
                        for(int j=1; j<k.size(); j++)
                        {
                            printf("%c", k[j]);
                        }
                        printf("%cay", k[0]);
                    }
                    k = "";
                }
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
