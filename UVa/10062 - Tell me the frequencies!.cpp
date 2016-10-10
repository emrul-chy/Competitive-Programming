#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j=0, l, a[130], b[130];
    memset(a, 0, sizeof(a));
    char c[100000];
    while(gets(c))
    {
        if(j!=0)
        {
            printf("\n");
        }
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        l = strlen(c);
        for(i=0; i<l; i++)
        {
            a[c[i]]++;
            b[c[i]]++;
        }
        sort(a, a + 125);
        for(i=0; i < 125; i++)
        {
            for(j=125; j >= 0; j--)
            {
                if(a[i] == b[j] && a[i] > 0)
                {
                    printf("%d %d\n", j, a[i]);
                    b[j]=0;
                    break;
                }
            }
        }
        j=1;
    }
    return 0;
}
