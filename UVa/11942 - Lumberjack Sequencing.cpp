#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j, arr[10], sum, sum1;;
    cin>>t;
    cout<<"Lumberjacks:\n";
    for(i=0; i<t; i++)
    {
        sum=0;
        sum1=0;
        for(j=0; j<10; j++)
        {
            cin>>arr[j];
        }
        for(j=1; j<10; j++)
        {
            if(arr[j-1]<arr[j])
            {
                sum++;
            }
        }
        if( sum ==9 )
        {
            cout<<"Ordered\n";
        }
        else if (sum<9)
        {
            sum=0;
            for(j=0; j<9; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    sum1++;
                }
            }

            if( sum1 ==9 )
            {
                cout<<"Ordered\n";
            }
            else cout<<"Unordered\n";
        }
    }
    return 0;
}
