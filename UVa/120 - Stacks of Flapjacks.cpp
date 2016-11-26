#include <bits/stdc++.h>
using namespace std;

int ar[32];
vector <int> v;

int main()
{
    int p, i, j, n, mx = 0;
    string s;
    while(getline(cin, s))
    {
        cout << s << endl;

        v.clear();
        n = 0;
        stringstream ss;
        ss << s;

        while(ss >> p)
        {
            ar[n] = p;
            n++;
        }

        for(i = n-1; i>0; i--)
        {
            mx = 0;

            for(j=1; j<=i; j++)
            {
                if(ar[j] > ar[mx])
                {
                    mx = j;
                }
            }

            if(mx == 0)
            {
                reverse(ar, ar+i+1);
                v.push_back(n-i);
            }

            else if(mx != i)
            {
                reverse(ar, ar+mx+1);
                v.push_back(n-mx);
                reverse(ar, ar+i+1);
                v.push_back(n-i);
            }
        }

        for(i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << "0\n";
    }
    return 0;
}
