#include <bits/stdc++.h>
using namespace std;

char mp[] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F'};
int rmp[200];

void call()
{
    for(int i='0'; i<='9'; i++)
    {
        rmp[i] = i-'0';
    }
    for(int i = 'A'; i<= 'F'; i++)
    {
        rmp[i] = 10+i-'A';
    }
}

bool pre(char * s, int l, int xC, int & d)
{
    int a = 1;
    d = 0;
    for(int i=l-1; i >=0; --i)
    {
        int temp = rmp[s[i]];
        d +=  a*temp;
        a *= xC;
    }
    return true;
}

bool solve(int  d, int yC, char *ans, int & l)
{
    int temp = 1;
    l=0;
    while (d > 0)
    {
        temp = d % yC;
        char cur = mp[temp];
        ans[l] = cur;
        d /= yC;
        l++;
    }
    return true;
}

int main()
{

    char str[100];
    int x, y;
    call();
    while(scanf("%s %d %d", str, &x, &y) == 3)
    {
        char ans[50];
        int len = 0, n, l;
        l = strlen(str);
        pre(str, l, x, n);
        solve(n, y, ans, len);
        if(len > 7)
        {
            printf("  ERROR\n");
            continue;
        }
        if(len == 0)
            len++, ans[0] = '0';
        for(int i = 6; i > len-1; i--)
        {
            printf(" ");
        }
        ans[len] = '\0';
        string s(ans);
        reverse(s.begin(), s.end());
        printf("%s\n", s.c_str());
    }

    return 0;
}
