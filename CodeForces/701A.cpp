#include <bits/stdc++.h>
using namespace std;

int ar[105];

int main()
{
    int n, ans, i, s=0;
    cin >> n;
    
    for(i=1; i<=n; i++)
    {
        cin >> ar[i];
        s += ar[i];
    }
    
    ans = s/ (n/2);
    
    for(i=1; i<=n; i++)
    {
        if(ar[i] != -1)
        {
            for(int j = 1; j != i && j<=n; j++)
            {
                if(ar[j] != -1 && ans - ar[i] == ar[j])
                {
                    printf("%d %d\n", i, j);
                    ar[i] = -1, ar[j] = -1;
                }
            }
        }
    }
    
    return 0;
}
