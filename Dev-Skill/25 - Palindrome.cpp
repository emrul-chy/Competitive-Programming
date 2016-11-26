#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    string s;
    cin >> n;
    getchar();
    while(n--)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(i=0, j=s.size()-1; i < s.size(), j>=0; i++, j--)
        {
            if(s[i] != s[j])
            {
                break;
            }
        }
        if(i == s.size())
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
