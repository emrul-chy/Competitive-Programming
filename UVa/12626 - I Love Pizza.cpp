#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[605];
    int i, t, n, j,a[6];
    cin>>n;
    for(i=0; i<n; i++)
    {
        int M=0, A=0, R=0, G=0, I=0, T=0;
        scanf("%s", s);
        int l = strlen(s);
        for(j=0; j<l; j++)
        {
            if(s[j] == 'M') M++;
            else if(s[j] == 'A') A++;
            else if(s[j] == 'R') R++;
            else if(s[j] == 'G') G++;
            else if(s[j] == 'I') I++;
            else if(s[j] == 'T') T++;
        }
        a[0] = M / 1;
        a[1] = A / 3;
        a[2] = R / 2;
        a[3] = G / 1;
        a[4] = I / 1;
        a[5] = T / 1;
        sort(a, a+6);
        cout<<a[0]<<endl;
    }
    return 0;
}
