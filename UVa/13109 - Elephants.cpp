#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, m, i, w[100005], n, s, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(i=0; i<n; i++)
        {
            cin >> w[i];
        }
        sort(w, w+i);
        s = 0, c = 0;
        for(i=0; i<n; i++)
        {
            if(s + w[i] > m)
            {
                break;
            }
            else
            {
                s += w[i];
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
