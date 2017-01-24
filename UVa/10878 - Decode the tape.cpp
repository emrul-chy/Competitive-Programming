#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    getline(cin, s);
    
    while(getline(cin, s) && s.compare("___________"))
    {
        int c = 0, i;
        for(i=1; i<10; i++)
        {
            if(s[i] == ' ')
            {
                c = c * 2;
            }
            else if(s[i] == 'o')
            {
                c = c * 2 + 1;
            }
        }
        printf("%c", c);
    }
    
    return 0;
}
