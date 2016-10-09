#include <bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    int i, r;
    r = sqrt(n);
    if(n == 1 || n == 0 || n == 2) {
        return 1;
    }
    for(i=2; i<=r ; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    if(n % 2 == 1) {
        return 1;
    }
    return 0;
}
int main()
{
    char c[30];
    int sum, l, n, i, j;
    while(cin >> c)
    {
        sum = 0;
        l = strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i] >= 'a' && c[i] <= 'z')
            {
                sum += c[i] - 96;
            }
            else if(c[i] >= 'A' && c[i] <= 'Z')
            {
                sum += c[i] - 64 + 26;
            }
        }
        if(is_prime(sum) == 1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
}
