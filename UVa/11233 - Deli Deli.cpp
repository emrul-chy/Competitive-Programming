#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, ll,j, flg, l;
    char s[100][30], a[100][30], t[30];
    cin >> ll >> n;
    getchar();
    for(i=0; i<ll; i++)
    {
        cin >> s[i] >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> t;
        flg = 0;
        for(j=0; j<ll ; j++)
        {
            if(strcmp(s[j], t)==0)
            {
                printf("%s\n", a[j]);
                flg = 1;
                break;
            }
        }
        if(flg == 0)
        {
            l = strlen(t);
            if(t[l-1] == 'y' && (t[l-2] != 'a' && t[l-2] != 'e' && t[l-2] != 'i' && t[l-2] != 'o' && t[l-2] != 'u'))
            {
                for(j=0; j<l-1; j++)
                {
                    cout << t[j];
                }
                cout << "ies\n";
            }
            else if ((t[l-1] == 'o') || (t[l-1] == 's') || (t[l-2] == 'c' && t[l-1] == 'h') || (t[l-2] == 's' && t[l-1] == 'h') || (t[l-1] == 'x'))
            {
                cout << t << "es\n";
            }
            else
            {
                cout << t << "s\n";
            }
        }
    }
    return 0;
}
