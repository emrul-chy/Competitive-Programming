#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, al, j, bl, ac, bc;
    char  b[100],  a[100];
    cin>>t;
    getchar();
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        ac = bc = 0;
        al = strlen(a), bl = strlen(b);
        if(strcmp(a, b) == 0)
        {
            printf("Yes\n");
        }
        else if (al == bl)
        {
            for(j = 0; j < al; j++)
            {
                if((a[j] >= 'a' && a[j] <= 'z') && b[j] == a[j] && (a[j] != 'a' && a[j] != 'e' && a[j] != 'i' && a[j] != 'o' && a[j] != 'u'))
                {
                    ac++;
                }
                if((a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j]== 'u') && (b[j] == 'a' || b[j] == 'e' | b[j] == 'i' || b[j] == 'o' || b[j]== 'u'))
                {
                    bc++;
                }
            }
            if(ac + bc == al)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
