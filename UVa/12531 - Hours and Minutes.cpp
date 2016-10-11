#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        if(n % 6 == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
