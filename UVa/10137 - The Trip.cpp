#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    double n[1005], s1, s2, s, avg;
    while(cin >> t)
    {
        if(t == 0)
        {
            break;
        }
        s=0;
        for(i=0; i<t; i++)
        {
            cin >> n[i];
            s+= n[i];
        }
        avg = s / (double) t;
        s1 = 0, s2 = 0;
        for(i=0; i<t; i++)
        {
            double x = (double)(int) ((n[i] - avg) * 100) /100.0;
            if(x < 0)
            {
                s1 -= x;
            }
            else
            {
                s2 += x;
            }
        }
        printf("$%.2lf\n", max(s1, s2));
    }
    return 0;
}
