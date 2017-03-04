#include <bits/stdc++.h>
using namespace std;

string strsub(string x, string y)
{
    string a;

    int i, j, s=0, c=0, l= x.size(), ll = y.size();

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    for(i=ll; i<l; i++)
    {
        y += "0";
    }
    for(i=0; i<l; i++)
    {
        if(x[i] < y[i])
        {
            j = i+1;
            while(x[j] == '0' && j < l)
            {
                x[j] = '9';
                j++;
            }
            x[j]--;
            x[i] += 10;
        }
        s = (x[i]-'0') - (y[i] - '0');
        a += (s % 10) + '0';
    }
    while(a[l-1] == '0')
    {
        a.erase(a.end()-1);
        l--;
    }
    reverse(a.begin(), a.end());
    return a;
}

int cmp(string a, string b)
{
    int i, l = a.size();
    if(a.size() > b.size())
    {
        return 1;
    }
    if(a.size() < b.size())
    {
        return -1;
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(a[i] > b[i])
                return 1;
            if(b[i] > a[i])
                return -1;
        }
        return 0;
    }
}

int main()
{
    int T;
    string a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        if(cmp(a, b) == 0)
        {
            printf("0\n");
            continue;
        }
        if(cmp(a, b) == -1)
        {
            printf("-");
            swap(a, b);
        }
        cout << strsub(a, b) << endl;
    }
    return 0;
}
