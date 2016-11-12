#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x, y;
    string a, b;

    while(getline(cin,a))
    {
        getline(cin,b);

        x = a.size();
        y = b.size();

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
        {
            cout << a << endl;
            continue;
        }

        string s = "";

        for(i=0, j=0; i<x && j<y;)
        {
            if(a[i] == b[j])
            {
                s += a[i];
                i++;
                j++;
            }
            else
            {
                while (a[i] < b[j])
                {
                    ++i;
                    if (i == x)
                    {
                        break;
                    }
                }
                while (b[j] < a[i])
                {
                    ++j;
                    if (j == y)
                    {
                        break;
                    }
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
