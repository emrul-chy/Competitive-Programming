#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1005], cr[1005], c1[1005];
    cin >> c >> c1;
    int i, j, l;
    l = strlen(c);
    j = l-1;
    for(i=0; i <l; i++)
    {
        cr[j] = c[i];
        j--;
    }
    cr[i] ='\0';
    if(strcmp(c1, cr) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
