#include <bits/stdc++.h>
using namespace std;

int main()
{
    static struct job
    {
        long long tk;
        char name[20];
    } ar[5000];
    char ch[100000];
    int m, n, i,k=0;
    long long ans[1000];
    cin >> m >> n;
    for(i=0; i<m; i++)
    {
        cin >> ar[i].name >> ar[i].tk;
    }
    int s=n;
    while(n != 0)
    {
        while(cin >> ch)
        {
            if(strlen(ch) == 1 && ch[0] == '.')
            {
                n--;
                k++;
                break;
            }
            int l = strlen(ch);
            for(i=0; i<m; i++)
            {
                if(strcmp(ch, ar[i].name)==0)
                {
                    ans[k] += ar[i].tk;
                }
            }
        }
    }
    for(i=0; i<s; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
