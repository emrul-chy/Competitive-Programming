#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s;
    ll n, j ;
    cin >> n;
    while(n--)
    {
        cin >> s;
        //cout << s << endl;
        sort(s.begin(), s.end());
        cout << s << endl;
        while(next_permutation(s.begin(), s.end()))
        {
            cout << s << endl;
        }
        printf("\n");
    }
    return 0;
}
