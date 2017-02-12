#include <bits/stdc++.h>
#define LL long long int
using namespace std;
LL in[10000050];

int main()
{
    LL T, i;
    cin >> T;
    while(T--)
    {
        string s;
        getchar();
        getchar();
        getline(cin,s);
        LL c = 0;
        stringstream ss(s);
        while(ss >> in[c++]);
        LL n = c-1;
        vector <string> str, ans;
        for(i=0; i<n; i++)
        {
            cin >> s;
            ans.push_back(s);
            str.push_back(s);
        }
        for(i=0; i<n; i++)
        {
            ans[in[i]-1] = str[i];
        }
        for(i=0; i<ans.size(); i++)
        {
            cout << ans[i] << endl;
            if(i==ans.size()-1 && T != 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
