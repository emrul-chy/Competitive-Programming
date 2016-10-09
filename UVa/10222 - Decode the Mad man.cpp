#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,l;
    char s[100000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            tolower(s[i]);
            switch(s[i])
            {
            case ' ':
                printf(" ");
                break;
            case 'a':
                printf("[");
                break;
            case 's':
                printf("]");
                break;
            case 'z':
                printf("'");
                break;
            case 'x':
                printf("\\");
                break;
            case 'e':
                printf("q");
                break;
            case 'r':
                printf("w");
                break;
            case 't':
                printf("e");
                break;
            case 'y':
                printf("r");
                break;
            case 'u':
                printf("t");
                break;
            case 'i':
                printf("y");
                break;
            case 'o':
                printf("u");
                break;
            case 'p':
                printf("i");
                break;
            case '[':
                printf("o");
                break;
            case ']':
                printf("p");
                break;
            case 'd':
                printf("a");
                break;
            case 'f':
                printf("s");
                break;
            case 'g':
                printf("d");
                break;
            case 'h':
                printf("f");
                break;
            case 'j':
                printf("g");
                break;
            case 'k':
                printf("h");
                break;
            case 'l':
                printf("j");
                break;
            case ';':
                printf("k");
                break;
            case '\\':
                printf(";");
                break;
            case 'c':
                printf("z");
                break;
            case 'v':
                printf("x");
                break;
            case 'b':
                printf("c");
                break;
            case 'n':
                printf("v");
                break;
            case 'm':
                printf("b");
                break;
            case ',':
                printf("n");
                break;
            case '.':
                printf("m");
                break;
            case '/':
                printf(",");
                break;
            case 'q':
            case 'Q':
            case 'w':
            case 'W':
            case '{':
            case '}':
            case ':':
            case '"':
            case '|':
            case '<':
            case '>':
            case '?':
                break;
            default :
                printf("l");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
