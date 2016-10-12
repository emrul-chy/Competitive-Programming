#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[100];
    while(cin >> c)
    {
        if(c[0] == '#')
        {
            break;
        }
        int l=strlen(c);
        if(next_permutation(c,c+l))
        {

            cout << c << "\n";
        }
        else
        {
            printf("No Successor\n");
        }
    }
    return 0;
}
