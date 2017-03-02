#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    int T, n, j = 1, i, l;
    string s;
    while(cin >> s && s != "0")
    {
        l = s.size();
        n = s[0]-'0';
        if(l > 1 && l % 2 == 0)
        {
            n = n * 10 + s[1] - '0';
        }
        l = (l-1) / 2;
        n = (int) sqrt(n);
        printf("%d", n);
        for(i=0; i<l; i++)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
