#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    string s;
    getchar();
    getline(cin, s);
    for(i=0; i<n; i++)
    {
        if(s[i] == 'o' && s[i+1] == 'g' && s[i+2] == 'o')
        {
            i+=2;
            while(s[i+1] =='g' && s[i+2] == 'o')
            {
                i+=2;
            }
            printf("***");
            continue;
        }
        else cout << s[i];
    }

    cout << endl;
    return 0;
}
