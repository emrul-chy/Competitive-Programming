#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t, l, i, j=1, cnt;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        cin >> s;

        cnt = 0, l = s.size();

        for(i=0; i<l; i++)
        {
            if(s[i] == '-' && s[i+1] != 'S' && s[i-1] != 'S' && s[i+1] != 'B' && s[i+2] != 'B')
            {
                cnt++;
            }
        }

        printf("Case %d: %d\n", j++, cnt);
    }
    return 0;
}
