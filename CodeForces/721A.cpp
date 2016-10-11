#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int i, t, b=0, j=0, c=0, a[105];
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> ch;
        if(ch == 'B')
        {
            b++;
            a[j] = b;
            c++;
            if(i == t -1)
            {
                j++;
                a[j] = 1;
            }
        }
        else if(ch == 'W' || ch == '\0')
        {
            if(b > 0)
            {
                a[j++] = b;
            }
            b = 0;
        }
    }
    if(c == 0)
    {
        printf("0\n");
        return 0;
    }
    if(j == 0)
    {
        printf("1\n%d\n", a[0]);
        return 0;
    }
    printf("%d\n", j);
    for(i=0; i<j; i++)
    {
        printf("%d", a[i]);
        if(i == j-1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
