#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, T, a;

    while(cin >> n)
    {
        a = 0, T = 0;
        while(1)
        {
            T = (T * 10) % n;
            T = (T + 1) % n;
            a++;
            if(T == 0)
            {
                break;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}
