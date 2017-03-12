#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    char x[500005];
    while(scanf("%s", x)==1)
    {
        int mx = 0, t, i, cnt = 0, l;
        l = strlen(x);
        for(i=0; i<l; i++)
        {
            t = i;
            if(x[i] == '.')
            {
                cnt = 0;
                while(x[i] == '.')
                {
                    cnt++;
                    i++;
                }
                cnt--;
            }
            if(t == 0 || (i - 1 == l - 1))
                mx = max(mx, cnt);
            else
            {
                mx = max(mx, (cnt/2));
            }
        }
        printf("%d\n", mx);
    }
    return 0;
}
