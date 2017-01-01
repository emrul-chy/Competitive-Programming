#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1, i, j, a[123456];
    while (true)
    {
        int n;
        vector<int> v;

        cin >> n;
        
        if (n == -1) return 0;
        v.push_back(n);

        while (cin >> n && n != -1)
        {
            v.push_back(n);
        }

        int mx = 0;

        for (i = v.size() - 1; i >= 0; --i)
        {
            a[i] = 1;
            for (j = v.size() - 1; j > i; --j)
            {
                if (v[j] < v[i] && a[i] < a[j]+1)
                {
                    a[i] = a[j]+1;
                }
            }
            mx = max(a[i], mx);
        }
        if (tc != 1) printf("\n");
        printf("Test #%d:\n", tc++);
        printf("  maximum possible interceptions: %d\n", mx);
    }
    return 0;
}
