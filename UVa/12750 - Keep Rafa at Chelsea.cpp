#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, j=1, i, c, f, ans;
    char ch;
    cin >> T;
    while(T--)
    {
        cin >> n;
        f = c = ans = 0;
        for(i=0; i<n; i++)
        {
            cin >> ch;
            if(f)
            {
                continue;
            }
            else if(ch == 'L' || ch == 'D')
            {
                c++;
                if(c == 3)
                {
                    f = 1;
                    ans++;
                }
            }
            else
            {
                c = 0;
            }
            if(!f)
            {
                ans++;
            }
        }
        printf("Case %d: ", j++);
        if(f)
        {
            printf("%d\n", ans);
        }
        else
        {
            printf("Yay! Mighty Rafa persists!\n");
        }
    }
    return 0;
}
