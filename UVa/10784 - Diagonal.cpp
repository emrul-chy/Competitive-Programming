#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, q, l, tn, j, e, k, w, m, n, p;
    char c[100000], sc[1000];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>c;
        l = strlen(c);
        cin>>q;
        for(j=0; j<q; j++)
        {
            cin>>sc;
            tn = strlen(sc);
            e = 0;
            for(k=0; k<l; k++)
            {
                if(sc[e] == c[k])
                {
                    e++;
                    if(e == tn)
                        break;
                }
                else if(sc[e] != c[k])
                {
                    e = 0;
                }
            }
            if(e == tn) cout<<"y\n";
            else cout<<"n\n";
        }
    }
    return 0;
}
