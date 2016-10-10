#include <bits/stdc++.h>
#include <string.h>
using namespace std;
long long int a[1000007], b[1000007];
long long int p_p(long long int arr1[], long long int len1,long long int arr2[], long long int len2)
{
    int i=0,j=0, c=0;;
    while(len1 > i && len2 > j)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            c++;
            i++;
            j++;
        }
    }
    return c;
}
int main()
{
    long long n, m, i, cc;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(i=0; i<m; i++)
        {
            cin >> b[i];
        }
        cc = p_p(a, n, b, m);
        cout << cc << endl;
    }
    return 0;
}
