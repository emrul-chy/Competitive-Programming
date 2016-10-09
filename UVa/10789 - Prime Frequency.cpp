#include <bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    int i, r;
    r = sqrt(n);
    if(n == 1 || n == 0)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    for(i=2; i<=r ; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    if(n % 2 == 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char ch[2005];
    int j,l, i, c, t;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        int a[200];
        for(j=0; j<200; j++)
        {
            a[j] =0;
        }
        getchar();
        c =0;
        scanf("%s", ch);
        l = strlen(ch);
        for(j=0; j<l; j++)
        {
            if((ch[j] >= 'a' && ch[j] <= 'z') || (ch[j] >= 'A' && ch[j] <= 'Z') || (ch[j] >= '0' && ch[j] <= '9'))
            {
                a[ch[j]]++;
            }
        }
        printf("Case %d: ", i);
        for(j=1; j<200; j++)
        {
            if(is_prime(a[j]) == 1)
            {
                printf("%c", j);
                c++;
            }
        }
        if(c == 0)
        {
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}
