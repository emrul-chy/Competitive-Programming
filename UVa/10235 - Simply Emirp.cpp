#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, i, n, m;
    while(cin>>n)
    {
        r=0;
        int flg1=0, flg2=0;
        m = n;
        while (m != 0)
        {
            r*=10;
            r+=m%10;
            m/=10;
        }
        for(i=2; i<n/2; i++)
        {
            if(n % i == 0)
            {
                flg1=1;
                break;
            }
        }
        if(flg1 == 0)
        {
            for(i=2; i<r/2; i++)
            {
                if(r % i == 0)
                {
                    flg2=1;
                    break;
                }
            }
        }
        if(flg1 == 1 || (n == 1 || n==0))
        {
            printf("%d is not prime.\n", n);
        }
        else if(flg1==0)
        {
            if(flg1 == 0 && flg2==0 && n !=r)
            {
                printf("%d is emirp.\n", n);
            }
            else
            {
                printf("%d is prime.\n", n);
            }
        }

    }
    return 0;
}
