#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[2000];
    int l;
    while(gets(s))
    {
        l = strlen(s);
        for(int i =0; i<l; i++)
        {
            printf("%c", s[i]-7);
        }
        cout<<endl;
    }
    return 0;
}
