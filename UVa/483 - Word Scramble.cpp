#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int i, n, j, l;
    while(gets(ch))
    {
        l = strlen(ch);
        n = -1;
        for(i=0; i<l; i++)
        {
            if(ch[i]==' ')
            {
                for(j=i-1; j>n; j--)
                {
                    cout<<ch[j];
                }
                cout<<" ";
                n=i;
            }
        }
        for(i=l-1; i>n; i--)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
