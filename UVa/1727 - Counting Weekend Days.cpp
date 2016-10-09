#include <bits/stdc++.h>
using namespace std;
int main()
{
    char m[10], d[10];
    int i, j, t,n, mm, dd;
    cin>>t;
    for(i=0; i<t; i++)
    {
        getchar();
        cin>>m>>d;
        int c =0;
        if(strcmp(d, "SUN")==0)
        {
            n = 1;
        }
        else if(strcmp(d, "MON")==0)
        {
            n = 2;
        }
        else if(strcmp(d, "TUE")==0)
        {
            n = 3;
        }
        else if(strcmp(d, "WED")==0)
        {
            n = 4;
        }
        else if(strcmp(d, "THU")==0)
        {
            n = 5;
        }
        else if(strcmp(d, "FRI")==0)
        {
            n = 6;
        }
        else if(strcmp(d, "SAT")==0)
        {
            n = 7;
        }
        if(strcmp(m, "JAN")==0 || strcmp(m, "MAR")==0 || strcmp(m, "MAY")==0 || strcmp(m, "JUL")==0  || strcmp(m, "AUG")==0 || strcmp(m, "OCT")==0 || strcmp(m, "DEC")==0)
        {
            mm = 31;
        }
        else if(strcmp(m, "FEB")==0)
        {
            mm = 28;
        }
        else if(strcmp(m, "APR")==0 || strcmp(m, "JUN")==0 || strcmp(m, "SEP")==0 || strcmp(m, "NOV")==0)
        {
            mm = 30;
        }
        dd = n + mm;
        for(j=n; j<=dd; j++)
        {
            if((j % 7 == 0 || j % 7 == 1 ) && j-n > 0 && j>= n)
            {

                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
