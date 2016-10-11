#include <bits/stdc++.h>
using namespace std;
int main()
{
    double area[100000],mini;
    int x1, v,y1,x2,y2, i, n, t, j;
    cin>>x1>>y1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x2>>y2>>v;
        area[i] = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        area[i] = area[i] / v;
    }
    mini = area[0];
    for(i=0; i<n; i++)
    {
        if(area[i] < mini)
        {
            mini = area[i];
        }
    }
    printf("%.20lf\n",mini);
    return 0;
}
