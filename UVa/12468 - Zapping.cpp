#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(a == -1 && b == -1)
        {
            break;
        }
        if(abs(a-b) > 50)
        {
            printf("%d\n", 100-abs(a-b));
        }
        else
        {
            printf("%d\n", abs(a-b));
        }
    }
    return 0;
}
