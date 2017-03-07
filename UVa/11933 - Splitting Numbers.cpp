#include <bits/stdc++.h>
using namespace std;

int x, y;

int binaryToInt(string s)
{
    int sum = 0, i, l, j=0;
    l = s.size();
    for(i=l-1; i>=0; i--)
    {
        sum += (s[i]-'0') * pow(2, j);
        j++;
    }
    return sum;
}

void intToBinary(int n)
{
    string s, a, b;
    int i, c=0, l;
    while(n != 0)
    {
        s += ((n % 2) + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    l = s.size();
    for(i=0; i<l; i++)
    {
        a += "0";
        b += "0";
    }
    for(i=l-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            c++;
            if(c % 2 == 1)
                a[i] = '1';
            else
                b[i] = '1';
        }
    }
    x = binaryToInt(a);
    y = binaryToInt(b);
}

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        intToBinary(n);
        cout << x << " " << y << endl;
    }
    return 0;
}
