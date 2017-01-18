#include <bits/stdc++.h>
using namespace std;

char a[120][20] =   {"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii",
                    "ix", "x", "xi", "xii", "xiii", "xiv", "xv", "xvi",
                    "xvii", "xviii", "xix", "xx", "xxi", "xxii", "xxiii",
                    "xxiv", "xxv", "xxvi", "xxvii", "xxviii", "xxix", "xxx",
                    "xxxi", "xxxii", "xxxiii", "xxxiv", "xxxv", "xxxvi", "xxxvii",
                    "xxxviii", "xxxix", "xl", "xli", "xlii", "xliii", "xliv",
                    "xlv", "xlvi", "xlvii", "xlviii", "xlix", "l", "li", "lii",
                    "liii", "liv", "lv", "lvi", "lvii", "lviii", "lix", "lx",
                    "lxi", "lxii", "lxiii", "lxiv", "lxv", "lxvi", "lxvii",
                    "lxviii", "lxix", "lxx", "lxxi", "lxxii", "lxxiii", "lxxiv",
                    "lxxv", "lxxvi", "lxxvii", "lxxviii", "lxxix", "lxxx", "lxxxi",
                    "lxxxii", "lxxxiii", "lxxxiv", "lxxxv", "lxxxvi", "lxxxvii",
                    "lxxxviii", "lxxxix", "xc", "xci", "xcii", "xciii", "xciv",
                    "xcv", "xcvi", "xcvii", "xcviii", "xcix", "c"};

int main()
{
    int n, i, j;
    while(cin >> n && n != 0)
    {
        cout << n << ":";
        map <char, int> mp;
        for(j=1; j<=n; j++)
        {
            for(i=0; i<strlen(a[j]); i++)
            {
                mp[a[j][i]]++;
            }
        }
        printf(" %d i, %d v, %d x, %d l, %d c\n", mp['i'], mp['v'], mp['x'], mp['l'], mp['c']);
    }
    return 0;
}
