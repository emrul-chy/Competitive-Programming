#include <bits/stdc++.h>
#define LL long long
#define mod 10000007
using namespace std;

map <string, int> mp;
int sum, flg, c=1;

int main()
{
    mp["one"] = 1 ;
    mp["zero"] = 0 ;
    mp["two"] = 2 ;
    mp["three"] = 3;
    mp["four"] = 4;
    mp["five"] = 5;
    mp["six"] = 6;
    mp["seven"] = 7;
    mp["eight"] = 8;
    mp["nine"] = 9;
    mp["ten"] = 10;
    mp["eleven"] = 11;
    mp["twelve"] = 12;
    mp["thirteen"] = 13;
    mp["fourteen"] = 14;
    mp["fifteen"] = 15;
    mp["sixteen"] = 16;
    mp["seventeen"] = 17;
    mp["eighteen"] = 18;
    mp["nineteen"] = 19;
    mp["twenty"] = 20;
    mp["thirty"] = 30;
    mp["forty"] = 40;
    mp["fifty"] = 50;
    mp["sixty"] = 60;
    mp["seventy"] = 70;
    mp["eighty"] = 80;
    mp["ninety"] = 90;
    mp["hundred"] = 100;
    mp["thousand"] = 1000;
    mp["million"] = 1000000;
    string s, x;
    string v[100];

    while(getline(cin, s))
    {
        int tmp = 0, i, j=0, l = s.size();
        sum = 0, flg = 0;
        c=1;
        for(i=0; i<l; i++)
        {
            x = "";
            while(s[i] != ' ' && i < l)
            {
                x += s[i];
                i++;
            }
            v[j++] = x;
        }
        for(i=0; i<j; i++)
        {
            if(v[i] == "negative")
                flg = 1;
            tmp =0;
            while(( v[i] != "thousand" && v[i] != "million") && i < j)
            {
                if(v[i] == "hundred")
                {
                    tmp  *= 100;
                }
                else
                {
                    tmp += mp[v[i]];
                }
                i++;
                c = 1;
            }
            if(i != j)
                c = mp[v[i]];
            else
                c = 1;
            tmp *= c;
            sum += tmp;
            c = 1;
        }
        if(flg)
            sum *= -1;
        printf("%d\n", sum);
    }
    return 0;
}
