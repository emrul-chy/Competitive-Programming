#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i, c, x, sum, y;
    while(cin >> a >> b >> c)
    {
        y = b + c + 9;
        sum = 0;
        for(i=1; ; i++)
        {
            sum += i;
            if( sum + (((i+a)*(i+1+a))/2) == y)
            {
                x = i;
                break;
            }
        }
        cout << ((x*(x+1))/2) - 3 - c << endl;
    }
    return 0;
}
