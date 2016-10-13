#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, n, i = 1, c, l;

    while(cin >> A >> l && A >= 0 && l >= 0)
    {
        c = 0;
        n = A;
        if(A == 1)
        {
            break;
        }
        else
        {
            c = 1;
        }
        while(A <= l)
        {
            if(A % 2 == 0)
            {
                A /= 2;
                if(A > l)
                {
                    break;
                }
                c++;
                if(A == 1)
                {
                    break;
                }
            }
            else if(A % 2 == 1)
            {
                A = 3 * A + 1;
                if(A > l)
                {
                    break;
                }
                c++;
                if(A == 1)
                {
                    break;
                }
            }
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", i, n, l, c);
        i++;
    }
    return 0;
}
