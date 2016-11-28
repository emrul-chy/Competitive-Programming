#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, i, j, q, ar[128]={0};
    string s;
    char s1, s2;

    cin >> t;

    while(t--)
    {
        getchar();
        getline(cin, s);

        for(i=0; i<128; i++)
        {
            ar[i] = i;
        }

        cin >> q;

        for(i=0; i<q; i++)
        {
            cin >> s1 >> s2;
            for(j='A'; j<='Z'; j++)
            {
                if(s2 == ar[j])
                {
                    ar[j] = s1;
                }
            }
        }

        for(i=0; i<s.size(); i++)
        {
            printf("%c", ar[s[i]]);
        }

        printf("\n");
    }
    return 0;
}
