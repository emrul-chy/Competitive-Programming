#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    scanf("%d", &n);
    while(n--)
    {
        cin >> s;
        string k="", l="";
        int i, j, m, mn = s.size(), f;
        for(i=0; i<s.size(); i++)
        {
            f = 0;
            k += s[i];
            for(j=i+1; j<s.size(); j+=k.size())
            {
                l = "";
                for(m=j; m<j+k.size(); m++)
                {
                    l += s[m];
                }
                if(l != k)
                {
                    f = 1;
                }
            }
            if(f == 0)
            {
                int x = k.size();
                mn = min(mn, x);
            }
        }
        printf("%d\n", mn);
        if(n)
        {
            printf("\n");
        }
    }
    return 0;
}

