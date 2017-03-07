#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int cmp(string a, string b)
{
    return a+b>b+a;
}

int main()
{
    char str[2000];
    int n, i;
    while(scanf("%d", &n))
    {
        if(!n)
            break;
        vector <string> v;
        for(i=0; i<n; i++)
        {
            scanf("%s", str);
            string s(str);
            v.push_back(s);
        }
        sort(v.begin(), v.end(), cmp);
        for(i=0; i<n; i++)
        {
            printf("%s", v[i].c_str());
        }
        printf("\n");
    }
    return 0;
}
