#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[102], i, t, sum=0, s=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<t; i++)
    {
        if(n[i] == 1) sum++;
        else if(i >=1 && n[i] == 0 && n[i+1] == 1 && n[i-1] ) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
