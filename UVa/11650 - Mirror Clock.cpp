#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, hh, mm;
    cin>>t;
    for(i=0; i<t; i++)
    {
        scanf("%d:%d", &hh, &mm);
        if(mm == 0)
        {

            if(hh==12)
            {
                hh = 12;
            }
            else
            {
                hh = 12-hh;
            }
            if(hh>9)
            {
                printf("%d:00\n", hh);
            }
            else
            {
                printf("0%d:00\n", hh);
            }
        }
        else
        {
            if(hh==12)
            {
                hh = 11;
            }
            else if(hh == 11)
            {
                hh = 12;
            }
            else hh = 11-hh;
            mm = 60 -mm;
            if(mm==60) mm = 60;
            if(hh>9 && mm>9)
            {
                printf("%d:%d\n", hh, mm);
            }
            else if(hh>9 && mm<10)
            {
                printf("%d:0%d\n", hh, mm);
            }
            else if(hh<10 && mm>10)
            {
                printf("0%d:%d\n", hh, mm);
            }
            else
            {
                printf("0%d:0%d\n", hh, mm);
            }
        }
    }
    return 0;
}
