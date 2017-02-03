#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin >> n, n)
    {
        int i = 1;
        while(i < n)
        {
            i = i * 2 + 1;
        }
        if(i == n)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
    return 0;
}
