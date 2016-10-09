#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[30];
    double ans=0;
    int i, a, b, j, n, l = 0;
    cin>>n;
    getchar();
    for(i=0; i<n; i++)
    {
        a=b=0;
        cin>>a;
        getchar();
        gets(c);
        l = strlen(c);
        for(j=0; j<l; j++)
        {
            if(c[j] >= '0' && c[j] <= '9')
            {
                b = c[j] - '0';
                break;
            }
        }
        ans = a * .5 + b * .05;
        cout << "Case " << i+1 << ": " << ans <<endl;
    }
    return 0;
}
