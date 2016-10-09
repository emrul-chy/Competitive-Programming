#include<stdio.h>
int main()
{
    int i, j, t, p, avb, sum, g[1002];
    double avg, avg1;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        avb =0;
        sum = 0;
        avg =0.0;
        avg1 = 0;
        scanf("%d", &p);
        for(j=0; j<p; j++)
        {
            scanf("%d", &g[j]);
            sum=sum+g[j];
        }
        avg = (double) (sum) / (double) (p);

        for(j=0; j<p; j++)
        {
            if(g[j]> avg)
            {
                avb++;
            }
        }
        avg1 = ((double)(avb) / (double)(p)) *100.0;

        printf("%0.3lf%%\n", avg1);
    }
    return 0;
}
