#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0, a[10004], s;
    while (cin>>a[i])
    {
        sort(a,a+i+1);
        if(i % 2 == 0)
        {
            cout << a[i/2] << endl;
        }
        else
        {
            cout << (a[i/2] + a[(i+1)/2]) / 2 <<endl;
        }
        i++;
    }
    return 0;
}
