#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if(c - b >= a)
        {
            printf("Props win!\n");
        }
        else
        {
            printf("Hunters win!\n");
        }
    }
    return 0;
}
