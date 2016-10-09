#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j;
    char a[30], b[30], c[30];
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(a);
        cin>>b;
        getchar();
        int k = 0;
        printf("Case %d:", i);
        int l1 = strlen(a), l2 = strlen(b);
        if(strcmp(a, b)==0)
        {
            printf(" Yes\n");
        }
        else if(l1 == l2)
        {
            printf(" Wrong Answer\n");
        }
        else
        {
            for(j=0; j<l1; j++)
            {
                if(a[j] != ' ')
                {
                    c[k++] = a[j];
                }
            }
            c[k] = '\0';
            if(strcmp(b, c) == 0)
            {
                printf(" Output Format Error\n");
            }
            else
            {
                printf(" Wrong Answer\n");
            }
        }
    }
    return 0;
}
