#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100000], flg, j=0, x, i;
    while(cin >> n)
    {
        flg = 0;
        j=0;
        if(n == 0)
        {
            break;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                cin >> x;
                if(x != 0)
                {
                    a[j++] = x;
                    flg = 1;
                }
            }
            if(flg == 0)
            {
                printf("0\n");
            }
            else
            {
                for(i=0; i<j; i++)
                {
                    cout << a[i];
                    if(i == j - 1)
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}
