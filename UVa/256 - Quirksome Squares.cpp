#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 2)
        {
            printf("00\n");
            printf("01\n");
            printf("81\n");
        }
        else if(n == 4)
        {
            printf("0000\n");
            printf("0001\n");
            printf("2025\n");
            printf("3025\n");
            printf("9801\n");
        }
        else if(n == 6)
        {
            printf("000000\n");
            printf("000001\n");
            printf("088209\n");
            printf("494209\n");
            printf("998001\n");
        }
        else if(n == 8)
        {
            printf("00000000\n");
            printf("00000001\n");
            printf("04941729\n");
            printf("07441984\n");
            printf("24502500\n");
            printf("25502500\n");
            printf("52881984\n");
            printf("60481729\n");
            printf("99980001\n");
        }
    }
    return 0;
}
