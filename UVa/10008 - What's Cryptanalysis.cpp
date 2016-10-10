#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, l, a[125], b[125];
    memset(a, 0, sizeof(a));
    char c[100000];
    cin >> t;
    getchar();
    while(t--)
    {
        gets(c);
        l = strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i] >= 'a' && c[i] <= 'z')
            {
                c[i] -= 32;
            }
            a[c[i]]++;
            b[c[i]]++;
        }
    }
    sort(a, a + 125);
    for(i=124; i >=0; i--)
    {
        for(j=0; j<125; j++)
        {
            if(a[i] == b[j] && a[i] > 0)
            {
                if(j >= 'A' && j <= 'Z')
                {
                    printf("%c %d\n", j, a[i]);
                    b[j]=0;
                    break;
                }

            }
        }
    }
    return 0;
}
