#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, j, k, n, s;
    char c[1003], x;
    cin >> t;
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(c);
        printf("Case %d: ", i);
        int l = strlen(c);
        for(j=0; j<l; )
        {
            if(c[j] >= 'A' && c[j] <= 'Z')
            {
                x = c[j];
                j++;
                s =0;
                while(c[j] >= '0' && c[j] <= '9')
                {
                    s = s * 10 + c[j] - '0';
                    j++;
                }
                for(k=0; k<s; k++)
                {
                    printf("%c", x);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
