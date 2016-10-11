#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    while(n > 5)
    {
        n /= 2;
        n -=2;
    }
    switch(n)
    {
    case 1:
        cout << "Sheldon\n";
        break;
    case 2:
        cout << "Leonard\n";
        break;
    case 3:
        cout << "Penny\n";
        break;
    case 4:
        cout << "Rajesh\n";
        break;
    case 5:
        cout << "Howard\n";
        break;
    }
    return 0;
}
