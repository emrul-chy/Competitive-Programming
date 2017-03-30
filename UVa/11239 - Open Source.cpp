#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    int flg=1;

    while(flg)
    {
        map <string, int> mp;
        map <string, int> ::iterator it;
        map <string, string> x;
        map <string, int> cut;
        string cur;
        int f=3;
        while(f != 0)
        {
            if(f == 1)
                break;
            if(f == 3)
                getline(cin, str);
            if(f == 2)
                str = cur;
            if(str[0] == '0'){
                flg = 0;
                break;
            }
            if(str[0] >= 'A' && str[0] <= 'Z')
            {
                cur = str;
                mp[cur] = 0;
                while(getline(cin, str))
                {
                    if(str[0] >= 'A' && str[0] <= 'Z')
                    {
                        cur = str;
                        f = 2;
                        break;
                    }
                    if(str[0] == '1')
                    {
                        f = 1;
                        break;
                    }
                    if(str[0] == '0')
                    {
                        f = 0;
                        break;
                    }
                    if(x[str] == "")
                    {
                        mp[cur]++;
                        x[str] = cur;
                    }
                    else if(x[str] != cur)
                    {
                        if( cut[str] == 0)
                        mp[ x[str] ]--;
                        cut[str] = 1;
                    }
                }
            }
            if(f == 2)
                continue;
            if(!f)
                flg=0;
        }
        vector < string > tmp;
        vector < pair <int, pair<int, string> > > v;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            tmp.push_back(it->first);
        }
        sort(tmp.rbegin(), tmp.rend());
        map <string, int> p;
        for(int i = 0; i < tmp.size(); i++)
        {
            p[ tmp[i] ] = i;

        }
        for(int i = 0; i < tmp.size(); i++)
        {
            v.push_back(make_pair( max((int) 0, mp[ tmp[i] ]), make_pair(p[ tmp[i]], tmp[i])));
        }
        sort(v.rbegin(), v.rend());
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i].second.second << " " << v[i].first << endl;
        }
        if(f == 1)
            continue;
        if(!flg)
            break;
    }
    return 0;
}
