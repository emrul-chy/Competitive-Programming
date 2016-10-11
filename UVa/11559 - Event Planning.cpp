#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, i, j, h, w, bd, mn, ans, tk;
    while(cin >> n >> b >> h >> w)
    {
        mn = b+1;
        ans=0;
        for(i=0; i<h; i++)
        {
            cin >> tk;
            for(j=0; j<w; j++)
            {
                cin >> bd;
                if(bd >= n)
                {
                    ans = n * tk;
                    if(ans < mn)
                    {
                        mn = ans;
                    }
                }
            }
        }
        if(mn > b)
        {
            printf("stay home\n");
        }
        else
        {
            cout << mn << endl;
        }
    }
    return 0;
}
