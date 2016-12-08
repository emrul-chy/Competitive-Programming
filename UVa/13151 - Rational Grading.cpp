#include <bits/stdc++.h>
using namespace std;
#define int long long
map <int, int> mp;

int hex(char hc[], int l)
{

    int D, p;
    int i = 0, val;

    D = 0;
    p = 1;


    l-=3;
    for(i=2; i<strlen(hc); i++)
    {

        val = mp[hc[i]];
        D += val * pow(16, l);
        l--;
    }
    return D;
}

int oct(int on)
{
    int dN = 0, i = 0, rem;
    while (on != 0)
    {
        rem = on % 10;
        on /= 10;
        dN += rem * pow(8, i);
        ++i;
    }
    return dN;
}

main()
{
    char s[100], in[100];
    int num, tm, t, i;
    for(i=0; i<=9; i++)
    {
        mp[i+48] = i;
    }
    int h = 10;
    for(i='A'; i<= 'F'; i++)
    {
        mp[i] = h;
        h++;
    }
    while(cin >> s >> t && t != 0 && strcmp(s, "0")!=0)
    {
        if(s[0] == '0' && s[1] == 'x')
        {
            num = hex(s, strlen(s));
        }
        else if(s[0] == '0')
        {
            stringstream ss(s);
            ss >> num;
            num = oct(num);
        }
        else
        {
            stringstream ss(s);
            ss >> num;
        }
        int c = 0;
        for(i=0; i<t; i++)
        {
            cin >> in >> tm;
            if(strcmp(in,"i++")==0)
            {
                if(num == tm)
                {
                    c++;
                }
                num=tm+1;
            }
            else if(strcmp(in, "++i")==0)
            {
                num+=1;
                if(num == tm)
                {
                    c++;
                }
                num = tm;
            }
            else if(strcmp(in, "i--")==0)
            {
                if(num == tm)
                {
                    c++;
                }
                num=tm-1;
            }
            else if(strcmp(in, "--i")==0)
            {
                num -= 1;
                if(num == tm)
                {
                    c++;
                }
                num = tm;
            }
            else if(strcmp(in, "i")==0)
            {
                if(num == tm)
                {
                    c++;
                }
                num = tm;
            }
        }
        cout << c << endl;
    }
    return 0;
}
