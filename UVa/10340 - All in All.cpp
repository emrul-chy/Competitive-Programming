#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    long long int n, l, c, i, j;
    while(cin>>s1>>s2)
    {
        l = s1.size();
        c = 0;
        for(i=0; i<s2.size() && c < l; i++)
        {
            if(s1[c] == s2[i])
            {
                c++;
            }
        }
        if(c == l)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
