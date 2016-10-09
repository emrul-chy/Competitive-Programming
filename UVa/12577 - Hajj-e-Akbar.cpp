#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j = 1;
    char c[20];
    while(cin >> c)
    {
        if(strcmp(c, "*")==0)
        {
            break;
        }
        printf("Case %d: ", j);
        if(strcmp(c, "Hajj")==0)
        {
            printf("Hajj-e-Akbar\n");
        }
        else if(strcmp(c, "Umrah")==0)
        {
            printf("Hajj-e-Asghar\n");
        }
        j++;
    }
    return 0;
}
