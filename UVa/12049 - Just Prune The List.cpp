#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, m, x, i, sum;
    scanf("%d", &T);
    while(T--)
    {
        sum = 0;
        scanf("%d %d", &n, &m);
        vector <int> v;
        map <int, int> fq1, fq2;
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            if(!fq1[x])
            {
                v.push_back(x);
            }
            fq1[x]++;
        }
        for(i=0; i<m; i++)
        {
            scanf("%d", &x);
            if(!fq1[x])
            {
                sum++;
            }
            fq2[x]++;
        }
        for(i=0; i<v.size(); i++)
        {
            sum += abs(fq1[v[i]] - fq2[v[i]]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
