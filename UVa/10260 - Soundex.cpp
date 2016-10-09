#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[22] ;
    int l, i, a[22];
    while(cin>>c)
    {
        l = strlen(c);
        for(i=0; i<l; i++)
        {
            switch(c[i])
            {
            case 'B':
            case 'F':
            case 'P':
            case 'V':
                a[i]=1;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            case 'C':
            case 'J':
            case 'G':
            case 'K':
            case 'Q':
            case 'S':
            case 'X':
            case 'Z':
                a[i] = 2;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            case 'D':
            case 'T':
                a[i] = 3;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            case 'L':
                a[i] = 4;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            case 'M':
            case 'N':
                a[i] = 5;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            case 'R':
                a[i] = 6;
                if((i>0 && a[i] != a[i-1]) || i == 0)
                    cout<<a[i];
                break;
            default:
                a[i] = 0;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
