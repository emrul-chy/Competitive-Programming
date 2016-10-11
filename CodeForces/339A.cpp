#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[110];
    cin >> c;
    int i, l, j=0, a[105];
    l = strlen(c);
    for(i=0; i<l; i+=2)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3')
        {
            a[j++] = c[i] - '0';
        }
    }
    sort(a, a+j);
    for(i=0; i<j; i++)
    {
        cout << a[i];
        if(i == j-1)
        {
            cout << endl;
        }
        else
        {
            cout << "+";
        }
    }
    return 0;
}
