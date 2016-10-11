#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, c;
    cin>>t;
    char s[200004];
    int a[200004];
    cin>>s;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    int ans = 1000000000;
    for(i=0; i<t; i++)
    {
        if(s[i] == 'R' && s[i+1] == 'L')
        {
            c = (a[i+1] - a[i]) /2;
            if(c<ans)
            {
                ans = c;
            }

        }
    }
    if(ans == 1000000000) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}

