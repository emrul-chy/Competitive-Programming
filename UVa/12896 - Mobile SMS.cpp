#include <bits/stdc++.h>
using namespace std;
int main()
{
    char k[1000];
    struct slg
    {
        char s1[1000];
        char s2[1000];
    } arr[1000];
    int i, n,t,l,j;
    cin>>t;
    getchar();
    for(i=0; i<t; i++)
    {
        gets(arr[i].s1);
        gets(arr[i].s2);
    }
    cin>>n;
    getchar();
    for(i=0; i<n; i++)
    {
        gets(k);

        l = strlen(k);
        for(j=0; j<t; j++)
        {
            int c=0;
            int ll = strlen(arr[j].s1);
            if(l==ll)
            {
                for(int s = 0; s<ll; s++)
                {
                    if(k[s] == arr[j].s1[s] )
                    {
                        c++;
                    }
                }
                if(c == l) cout<<arr[j].s2<<endl;
            }
        }
    }
    return 0;
}
