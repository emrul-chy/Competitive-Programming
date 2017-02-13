#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    LL n1, i, n2;
    string s;
    while(cin >> s)
    {
        sort(s.begin(), s.end());
        while(s[0] =='0')
        {
            i = 0;
            while(s[i] == '0')
            {
                i++;
            }
            swap(s[0], s[i]);
        }
        n1 = atoll(s.c_str());
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        n2 = atoll(s.c_str());
        printf("%lld - %lld = %lld = 9 * %lld\n", n2, n1, n2-n1, (n2-n1)/9);
    }
    return 0;
}
