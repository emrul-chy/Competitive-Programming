#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int e = (int) floor(-n*log10(2));
        printf("2^-%d = %.3lfE%d\n", n, pow(10, -n*log10(2) - e), e);
    }
    return 0;
}
