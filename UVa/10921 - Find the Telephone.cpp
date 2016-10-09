#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[100000];
    while(gets(c))
    {
        int l = strlen(c), i;
        for(i=0; i<l; i++)
        {
            if(c[i] == 'A' || c[i] == 'B' || c[i] == 'C')
            {
                cout << 2;
            }
            else if(c[i] == 'D' || c[i] == 'E' || c[i] == 'F')
            {
                cout << 3;
            }
            else if(c[i] == 'G' || c[i] == 'H' || c[i] == 'I')
            {
                cout << 4;
            }
            else if(c[i] == 'J' || c[i] == 'K' || c[i] == 'L')
            {
                cout << 5;
            }
            else if(c[i] == 'M' || c[i] == 'N' || c[i] == 'O')
            {
                cout << 6;
            }
            else if(c[i] == 'P' || c[i] == 'Q' || c[i] == 'R' || c[i] == 'S')
            {
                cout << 7;
            }
            else if(c[i] == 'T' || c[i] == 'U' || c[i] == 'V')
            {
                cout << 8;
            }
            else if(c[i] == 'W' || c[i] == 'X' || c[i] == 'Y' || c[i] == 'Z')
            {
                cout << 9;
            }
            else
            {
                cout << c[i];
            }
        }
        cout << endl;
    }
    return 0;
}
