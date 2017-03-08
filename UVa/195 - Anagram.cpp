#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b)
{
    if(tolower(a) == tolower(b))
    {
        return a < b;
    }
    return tolower(a) < tolower(b);
}

int main()
{
    string s;
    int T;
    cin >> T;
    while(T--)
    {
        cin >> s;
        sort(s.begin(), s.end(), cmp);
        printf("%s\n", s.c_str());
        while(next_permutation(s.begin(), s.end(), cmp) != 0)
        {
            printf("%s\n", s.c_str());
        }
    }
    return 0;
}
