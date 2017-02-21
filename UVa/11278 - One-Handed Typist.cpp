#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s1="~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string d="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    string s2="~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    string s;
    int i, j;
    while(getline(cin, s))
    {
        for(i = 0; i < s.size(); i++)
        {
            int flg = 0;
            for(j = 0; j<q.size(); j++)
            {
                if(q[j] == s[i])
                {
                    printf("%c", d[j]);
                    flg = 1;
                }
            }
            for(j = 0; j<s1.size(); j++)
            {
                if(s1[j] == s[i])
                {
                    printf("%c", s2[j]);
                    flg = 1;
                }
            }
            if(!flg)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
