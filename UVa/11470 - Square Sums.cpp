#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k=1, j, s, ar[12][12];
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin >> ar[i][j];
            }
        }
        printf("Case %d:", k);
        int a = 1, b = n;
        while(a <= b)
        {
            s = 0;
            if(a == b)
            {
                s = ar[a][b];
            }
            else
            {
                for(j=a; j<=b; j++)
                {
                    s+=ar[a][j];
                    s+=ar[b][j];
                }
                for(i=a+1; i<=b-1; i++)
                {
                    s+=ar[i][a];
                    s+=ar[i][b];
                }
            }
            cout << " " << s;
            a++;
            b--;
        }
        cout<<endl;
        k++;
    }
    return 0;
}
