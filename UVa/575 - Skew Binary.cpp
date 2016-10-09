#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum, i, l;
    char s[10000];
    while(gets(s))
    {
        if(strcmp(s, "0")==0)
        {
            break;
        }
        sum = 0;
        l = strlen(s);
        for(i=0; i<l ; i++)
        {
            if(s[i] == '0' || s[i] == '1' || s[i] == '2')
            {
                sum+=(s[i] - '0') * (pow(2, l-i)-1);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
