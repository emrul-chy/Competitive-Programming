#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    string s;
    while(getline(cin, s) && s != "*")
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        char ans = s[0];
        int i, flg = 1;
        for(i=0; i<s.size()-1; i++)
        {
            if(s[i] == ' ' && s[i+1] != ans)
            {
                flg = 0;
                break;
            }
        }
        if(flg)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
