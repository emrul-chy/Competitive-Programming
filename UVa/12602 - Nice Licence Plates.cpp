#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, s;
    char a, b, c, d;
    cin >> T;
    while(T--)
    {
        getchar();
        scanf("%c %c %c %c %d", &a, &b, &c, &d, &n);
        if( n < 0 )
        {
            n *= -1;
        }
        s = (a-'A')*26*26 + (b-'A')*26 + (c-'A');
        if( abs( n - s ) > 100 )
        {
            printf("not ");
        }
        printf("nice\n");
    }
    return 0;
}
