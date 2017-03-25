// Bismillahir Rahmanir Rahim
// Mr_Emrul

#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
typedef pair <int, pii> pip;
const ll MX = 1000005;

int main()
{
    int t, i, j=1;
    string str, s[105];
    scanf("%d", &t);
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        string ans;
        if(j != 1)
            printf("\n");
        printf("Case #%d:\n", j++);
        while(getline(cin, str))
        {
            i=1;
            if(str.size()==0)
                break;
            istringstream ss(str);
            while(ss >> ans)
            {
                if(ans.size()>=i)
                {
                    printf("%c", ans[i-1]);
                    i++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
