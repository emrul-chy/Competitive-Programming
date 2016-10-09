#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, mhs, mhe, mme, mms, whs, wms, whe, wme;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int flg = 0;
        scanf("%d:%d %d:%d", &whs, &wms, &whe, &wme);
        scanf("%d:%d %d:%d", &mhs, &mms, &mhe, &mme);
        if(mhs < whs)
        {
            if(mhe < whs)
            {
                flg = 1;
            }
            else if(mhe == whs)
            {
                if(mme < wms)
                {
                    flg = 1;
                }
            }
        }
        else if(mhs > whe)
        {
            if(mhe > whe)
            {
                flg = 1;
            }
            else if(mhs == whe)
            {
                if(mms > wme)
                {
                    flg = 1;
                }
            }
        }
        else if(mhs == whe)
        {
            if(mms > wme)
            {
                flg = 1;
            }
        }
        else if(mhe == whs)
        {
            if(mme < wms)
            {
                flg = 1;
            }
        }
        if(flg == 1)
        {
            printf("Case %d: Hits Meeting\n", i);
        }
        else
        {
            printf("Case %d: Mrs Meeting\n", i);
        }
    }
    return 0;
}
