#include <stdio.h>
#include <math.h>
int main()
{
    int a, b , c , d;
    scanf("%d %d %d", &a,&b, &c);
    d =ceil((1.0 * a/b) *c -c);
    printf("%d\n", d);
    return 0;
}
