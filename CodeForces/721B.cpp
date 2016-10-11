#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, a, xa=0, ba=0, b=0, x=0, l[105];
    char c[105];
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> c;
        l[i] = strlen(c);
    }
    cin >> c;
    a = strlen(c);
    sort(l, l+n);
    for(i=0; i<n; i++)
    {
        if(l[i] < a)
        {
            b++;
            ba++;
            if(b == k)
            {
                b = 0;
                ba += 5;
            }
        }
        else if(l[i] == a)
        {
            ba++;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(l[i] > a)
        {
            break;
        }
        if(l[i] <= a)
        {
            xa++;
            x++;
            if(x == k && i != n - 1 && l[i+1] <= a)
            {
                xa+=5;
                x=0;
            }

        }

    }
    cout << ba << " " << xa << endl;
    return 0;
}
