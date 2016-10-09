#include <bits/stdc++.h>
using namespace std;
int main()
{
    char e[25], t[25];
    int l1, l2, i, j, s1, s2, v;
    double avg;
    while(gets(e))
    {
        gets(t);
        s1 = 0;
        s2 = 0;
        l1 = strlen(e);
        l2 = strlen(t);
        for(i=0; i<l1; i++)
        {
            if(e[i] >= 'A' && e[i] <= 'Z')
            {
                v = ((int)(e[i]) - 64);
                s1 += v;
            }
            else if(e[i] >= 'a' && e[i] <= 'z')
            {
                v = ((int) (e[i]) - 96);
                s1 += v;
            }
            else s1+=0;
        }
        while(s1>9)
        {
            s1 = s1 % 10 + (s1 / 10);
        }
        for(i=0; i<l2; i++)
        {
            if(t[i] >= 'A' && t[i] <= 'Z')
            {
                v = ((int)(t[i]) - 64);
                s2 += v;
            }
            else if(t[i] >= 'a' && t[i] <= 'z')
            {
                v = ((int) (t[i]) - 96);
                s2 += v;
            }
            else s2 += 0;
        }
        while(s2>9)
        {
            s2 = s2 % 10 + (s2 / 10);
        }
        if(s1 < s2)
        {
            avg = (double) (s1) / (double) (s2) * 100.0;
        }
        else if(s1 > s2)
        {
            avg = (double) (s2) / (double) (s1) * 100.0;
        }
        else
            avg = 100.00;
        printf("%0.2lf %%\n", avg);
    }
    return 0;
}
