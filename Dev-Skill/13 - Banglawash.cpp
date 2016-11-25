#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int t,i,n;
    scanf("%d", &t);

    while(t--)
    {
        for(i=0; i<8;i++)
        {
            scanf("%d", &n);
            v.push_back(n);
        }
        if(((v[0]+v[1])>(v[2]+v[3]))&&((v[4]+v[5])>(v[6]+v[7])))
        {
            printf("Banglawash\n");
        }
        else
        {
            printf("Miss\n");
        }
        v.clear();
    }
    return 0;
}
