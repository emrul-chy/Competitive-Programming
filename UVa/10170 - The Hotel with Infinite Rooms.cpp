#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, i, d, s;
    while(cin >> N >> d)
    {
        s = 0;

        for(i = N; ; i++)
        {
            s += i;
            if(s >= d)
            {
                printf("%lld\n", i);
                break;
            }
        }
    }
    return 0;
}
