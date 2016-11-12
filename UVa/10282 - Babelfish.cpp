#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, string> mp;
    char ch[100];
    while(gets(ch))
    {
        char a[50], b[10];
        sscanf(ch, "%s %s", a, b);
        mp[b] = a;
        if(strlen(ch) == 0)
        {
            break;
        }
    }
    while(gets(ch))
    {
        if(strlen(ch) == 0)
        {
            break;
        }
        else
        {
            if(mp[ch] == "\0")
            {
                printf("eh\n");
            }
            else
            {
                cout << mp[ch] << endl;
            }
        }
    }

    return 0;
}
