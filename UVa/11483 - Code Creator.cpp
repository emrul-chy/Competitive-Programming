#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> v;
    string s;
    int t, j = 1;
    while(cin >> t && t != 0)
    {
        getchar();
        for(int i = 0; i< t; i++)
        {
            getline(cin, s);
            v.push_back(s);
        }
        printf("Case %d:\n", j++);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n");
        printf("{\n");
        for(int i = 0; i< t; i++)
        {
            printf("printf(");
            printf("%c", 34);
            for(int j = 0; j<v[i].size(); j++)
            {
                if(v[i][j] == (char) 34 || v[i][j] == (char) 92)
                {
                    printf("%c%c", 92, v[i][j]);
                }
                else cout << v[i][j];
            }
            printf("%c%c%c);\n", 92, 110, 34);
        }
        printf("printf(");
        printf("%c", 34);
        printf("%c%c%c);\n", 92, 110, 34);
        printf("return 0;\n");
        printf("%c\n", 125);
        v.clear();
    }
    return 0;
}
