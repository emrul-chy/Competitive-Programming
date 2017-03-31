#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
    if( (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0) )
        return true;
    return false;
}

int main()
{
    int t, j=1;
    string s;

    map <string, int> m;
    map <string, int> ::iterator it;
    map <int, string> val_m;

    int m_x[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    m["January"] = 1, m["February"] = 2, m["March"] = 3, m["April"] = 4;
    m["May"] = 5, m["June"] = 6, m["July"] = 7, m["August"] = 8;
    m["September"] = 9, m["October"] = 10, m["November"] = 11, m["December"] = 12;

    for(it = m.begin(); it != m.end(); it++)
    {
        val_m[it->second] = it->first;
    }

    scanf("%d", &t);

    while(t--)
    {
        int curD=0, curM, curY=0, i, l, x;
        cin >> s;
        cin >> x;
        l = s.size();
        for(i=0; i<4; i++)
        {
            curY = curY * 10 + s[i] - '0';
        }
        s.erase(0, 5);
        for(i=l-2; i<l; i++)
        {
            curD = curD * 10 + s[i] - '0';
        }
        l = s.size();
        s.erase(l-3, 3);
        curM = m[s];
        for(i=1; i<=x; i++)
        {
            curD++;
            if(curD > m_x[curM])
            {
                if(curM == 2 && check(curY))
                {
                    if(i == x)
                    {
                        continue;
                    }
                    else
                    {
                        curD = 1;
                        i++;
                        curM++;
                        continue;
                    }
                }
                else
                {
                    curM++;
                    if(curM == 13)
                    {
                        curM = 1;
                        curD = 1;
                        curY++;
                    }
                    else
                    {
                        curD = 1;
                    }
                }
            }
        }
        printf("Case %d: %d-%s-", j++, curY, val_m[curM].c_str());
        curD < 10 ? printf("0%d\n", curD) : printf("%d\n", curD);
    }
    return 0;
}
