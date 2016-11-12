#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, T, i, f, j, ar[] = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962};
    cin >> T;

    for(j=1; j <= T; j++)
    {
        cin >> a >> b;
        f = 0;
        printf("case #%d\n", j);

        for(i=0; i<20; i++)
        {
            if(ar[i] >= a && ar[i] <= b)
            {
                printf("%d\n", ar[i]);
                f = 1;
            }
        }
        if(f == 0)
        {
            printf("no kaprekar numbers\n");
        }
        if(j != T)
        {
            printf("\n");
        }
    }
    return 0;
}
