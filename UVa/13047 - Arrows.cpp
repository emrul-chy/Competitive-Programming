#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t, l, i, q, mx, x, j=1, f, cnt;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        cin >> s;

        mx = -1, l = s.size();

        for(i=0; i<l; i++)
        {
            cnt = 0;
            if(s[i] == '<')
            {
                f = 0;
                cnt++;
                q = i+1;
                while(q < l)
                {
                    if(s[q] == '-' || s[q] == '=')
                    {
                        if(!f)
                        {
                            x = s[q];
                            f = 1;
                        }
                        else
                        {
                            if(s[q] != x)
                            {
                                break;
                            }
                        }
                        q++;
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                mx = max(mx, cnt);
            }
            else if(s[i] == '>')
            {
                f = 0;
                cnt++;
                q = i-1;
                while(q >= 0)
                {
                    if(s[q] == '-' || s[q] == '=')
                    {
                        if(!f)
                        {
                            x = s[q];
                            f = 1;
                        }
                        else
                        {
                            if(s[q] != x)
                            {
                                break;
                            }
                        }
                        q--;
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                mx = max(mx, cnt);
            }
        }

        printf("Case %d: %d\n", j++, mx);
    }
    return 0;
}
