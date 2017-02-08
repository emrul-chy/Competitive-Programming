#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x;
    while(scanf("%d", &n), n)
    {
        queue <int> q;
        for(i=1; i<=n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size() > 1)
        {
            printf(" %d", q.front());
            q.pop();
            x = q.front();
            q.pop();
            if(!q.empty())
            {
                printf(",");
            }
            q.push(x);
        }
        printf("\n");
        printf("Remaining card: %d\n", q.front());
    }
    return 0;
}
