#include <bits/stdc++.h>
using namespace std;

int p;

map <string, int> mp;
queue <string> q;

void bfs()
{
    string t, s1, s = "abcdefghijklmnopqrstuvwxyz";

    for(p=1; p<=26; p++)
    {
        t = "";
        t += s[p-1];
        q.push(t);
        mp[t] = p;
    }

    char c;

    while(!q.empty())
    {
        s = q.front();
        q.pop();
        c = s[s.size() - 1];
        if(!mp[s])
        {
            mp[s] = p;
            p++;
        }
        while(c != 'z')
        {
            c++;
            s1 = s + c;
            if(s1.size() < 6)
            {
                q.push(s1);
            }
        }
    }
}

int main()
{
    string s;

    bfs();

    while(cin >> s)
    {
        cout << mp[s] << endl;
    }
    return 0;
}
