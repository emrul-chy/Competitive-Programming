#include <bits/stdc++.h>
using namespace std;

int l[1001][1001];

int main()
{
    int n, m, i, j;
    string s1,s2;

    while(getline(cin, s1))
    {
        getline(cin, s2);
        n = s1.size();
        m = s2.size();

        for(i=n; i>=0; i--)
        {
            for(j=m; j>=0; j--)
            {
                if(i==n || j==m)
                {
                    l[i][j]=0;
                    continue;
                }
                if(s1[i] == s2[j])
                {
                    l[i][j] = 1+l[i+1][j+1];
                }
                else
                {
                    l[i][j] = max(l[i+1][j], l[i][j+1]);
                }
            }
        }

        printf("%d\n",l[0][0]);
    }

    return 0;
}
