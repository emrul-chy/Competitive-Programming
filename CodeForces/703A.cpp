#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c, mc=0, cc=0;
    cin >> n;
    while(n--)
    {
        cin >> m >> c;
        if(m>c) mc++;
        else if(c > m)cc++;
        else {
            mc++, cc++;
        }
    }
    if(mc>cc) cout << "Mishka";
    else if((cc > mc)) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}
