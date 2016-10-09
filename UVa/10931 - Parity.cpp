#include <bits/stdc++.h>
using namespace std;
long int arr[2000005];
int main()
{
    int n, t, j, c, a[100000], i;
    while(cin>>n)
    {
        c=0;
        i=0;
        if(n==0) break;
        while(n != 0)
        {
            t = n % 2;
            a[i++] = t;
            if(t == 1) c++;
            n = n / 2;
        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
        {
            cout<<a[j];
        }
        printf(" is %d (mod 2).\n", c);
    }
    return 0;
}
