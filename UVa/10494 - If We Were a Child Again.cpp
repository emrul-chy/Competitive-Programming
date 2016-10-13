#include <bits/stdc++.h>
using namespace std;

void div(char str[], long long n)
{
    long long i, flg = 0, t, s;
    s = 0;
    for(i=0; str[i] != '\0'; i++)
    {
        s = str[i] - '0' + s * 10;
        if(s / n != 0)
        {
            flg = 1;
        }
        if(flg == 1)
        {
            printf("%lld", s / n);
        }
        s = s % n;
    }
    if(flg == 0)
    printf("0");
}

long long mod(char str[], long long n)
{
    long long i, t, s;
    s = 0;
    for(i=0; str[i] != '\0'; i++)
    {
        s *= 10;
        s += str[i] - '0';
        s = s % n;
    }
    return s;
}

int main()
{
    char a[100000], ch;
    long long b, N;
    while(cin >> a)
    {
        cin >> ch >> b;
        if(ch == '%')
        {
            N = mod(a, b);
            cout << N << "\n";
        }
        else if(ch == '/')
        {
            div(a, b);
            printf("\n");
        }
    }
    return 0;
}
