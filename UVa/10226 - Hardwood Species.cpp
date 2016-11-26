#include <bits/stdc++.h>
using namespace std;

vector <string> v;

int main()
{
    string s;
    int i, t, c;
    cin >> t;
    
    getchar();
    getchar();
    
    while(t--)
    {
        c = 0;
        map <string, int> mp;
        
        while(getline(cin, s))
        {
            if(s.size() == 0)
            {
                break;
            }
            else
            {
                c++;
                if(mp[s] == 0)
                {
                    v.push_back(s);
                }
                mp[s]++;
            }
        }
        
        sort(v.begin(), v.end());
        double result;
        
        for(i=0; i<v.size(); i++)
        {
            cout << v[i];
            result = ((double)mp[v[i]]/(double)c) * 100.0;
            printf(" %.4lf\n", result);
        }
        
        if(t != 0)
        {
            printf("\n");
        }
        
        v.clear();
    }

    return 0;
}
