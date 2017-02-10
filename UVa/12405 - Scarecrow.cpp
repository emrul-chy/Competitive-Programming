#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL T, n, i, j = 1, c;
    string s;
    scanf("%lld", &T);
    while(T--)
    {
        c = 0;
        cin >> n;
        cin >> s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='.')
            {
                c++;
                i+=2;
            }
        }
        printf("Case %lld: %lld\n", j++, c);
    }
    return 0;
}
