#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int rec(string s)
{
    int sum = 0, i, l, j=0;
    l = s.size();
    for(i=l-1; i>=0; i--)
    {
        sum += (s[i]-'0') * pow(2, j);
        j++;
    }
    return sum;
}

int main()
{
    string a, b;
    int T, j=1;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        printf("Pair #%d: ", j++);
        if(__gcd(rec(a), rec(b)) >= 2)
            printf("All you need is love!\n");
        else
            printf("Love is not all you need!\n");
    }
    return 0;
}
