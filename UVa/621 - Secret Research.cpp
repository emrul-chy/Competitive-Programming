#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, l;
    char c[100000];
    cin >> t;
    getchar();
    while(t--)
    {
        gets(c);
        l = strlen(c);
        if(strcmp(c, "1") == 0 || strcmp(c, "4") == 0 || strcmp(c, "78") == 0)
        {
            printf("+\n");
        }
        else if(c[l-1] == '5' && c[l-2] == '3')
        {
            printf("-\n");
        }
        else if(c[0] == '9' && c[l-1] == '4')
        {
            printf("*\n");
        }
        else if(c[0] == '1' && c[1] == '9' && c[2] == '0')
        {
            printf("?\n");
        }
    }
    return 0;
}
