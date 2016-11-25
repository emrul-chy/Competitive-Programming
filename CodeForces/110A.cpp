#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int l, i, c = 0;
    l = s.size();
    for(i=0; i<l; i++)
    {
        if(s[i] == '4' || s[i] == '7') c++;
    }
    if(c == 4 || c == 7) printf("YES\n");
    else printf("NO\n");
}
