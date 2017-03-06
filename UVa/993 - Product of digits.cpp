#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, i, j;
    cin >> T;
    while(T--)
    {
        cin >> n;
        vector <int> v;
        if(n == 1)
        {
            puts("1");
            continue;
        }
        for(i=9; i>=2; i--)
        {
            while(n % i == 0)
            {
                n /= i;
                v.push_back(i);
            }
        }
        if(n != 1)
            puts("-1");
        else
        {
            sort(v.begin(), v.end());
            for(i=0; i<v.size(); i++)
            {
                cout << v[i];
            }
            printf("\n");
        }
    }
    return 0;
}
