#include <bits/stdc++.h>
#define MX 10000010
using namespace std;
vector<int>vctr[MX];
int arr[MX];
int main()
{
    int n, m, k, v, i;
    while(cin>>n>>m)
    {
        for(i=0; i<MX; i++)
        {
            vctr[i].clear();
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            vctr[arr[i]].push_back(i+1);
        }
        for(i=0; i<m; i++)
        {
            scanf("%d %d",&k,&v);
            if(vctr[v].size()<k)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n",vctr[v][k-1]);
            }
        }
    }
    return 0;
}
