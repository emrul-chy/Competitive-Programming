#include <bits/stdc++.h>
#define LL long long
using namespace std;

int mp[1000005];

int solve(char str[])
{
    int sum = 0, i;
    int l = strlen(str);
    for(i=0; i<l; i++)
    {
        sum = (sum * 10) + str[i];
        sum %= 1000007;
    }
    return sum;
}
int main()
{
    char str[1005];
    int n, q, i, j, c, cmp, sum;
    double t;
    scanf("%d %d", &n, &q);
    while(n--)
    {
        scanf("%s", str);
        scanf("%lf", &t);
        sum = solve(str);
        mp[sum] = (int) (t*10);
    }
    cin.ignore();
    for(j=1; j<=q; j++)
    {
        int flg = 0;
        sum = 0;
        gets(str);
        c = 0;
        char s[105][105];
        int l = strlen(str);
        for(i=0; i<l; i++)
        {
            int k = 0;
            while(str[i] != ' ' && i <l)
            {
                s[c][k++] = str[i];
                i++;
            }
            s[c][k] = '\0';
            c++;
        }
        sum += mp[solve(s[0])];
        for(i=1; i<c; i+=2)
        {
            if(strcmp(s[i], "+")==0)
            {
                sum += mp[solve(s[i+1])];
            }
        }
        l = strlen(s[c-1]);
        cmp = 0;
        for(i=0; i<l; i++)
        {
            cmp = cmp * 10 + s[c-1][i]-'0';
        }
        cmp = cmp * 10;
        if(strcmp(s[c-2], "<") == 0)
        {
            flg = (sum < cmp) ? 1 : 0;
        }
        else if(strcmp(s[c-2], ">") == 0)
        {
            flg = (sum > cmp) ? 1 : 0;
        }
        else if(strcmp(s[c-2], "<=") == 0)
        {
            flg = (sum <= cmp) ? 1 : 0;
        }
        else if(strcmp(s[c-2], ">=") == 0)
        {
            flg = (sum >= cmp) ? 1 : 0;
        }
        else if(strcmp(s[c-2], "=") == 0)
        {
            flg = (sum == cmp) ? 1 : 0;
        }
        printf("Guess #%d was ", j);
        if(!flg)
        {
            printf("in");
        }
        printf("correct.\n");
    }
    return 0;
}
