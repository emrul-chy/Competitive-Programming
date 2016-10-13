#include <bits/stdc++.h>
using namespace std;

char hexan[100];
void hex(long long n)
{
    long int r;
    int i=1,j,t;
    r = n;
    while(r!=0)
    {
        t = r % 16;

        if( t < 10)
            t =t + 48;
        else
            t = t + 55;

        hexan[i++]= t;
        r = r / 16;
    }
    for(j = i -1 ; j> 0; j--)
    {
        printf("%c",hexan[j]);
    }
}

long long dec(char hex[])
{
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;

    len = strlen(hex);
    len--;

    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
        case '0':
            val = 0;
            break;
        case '1':
            val = 1;
            break;
        case '2':
            val = 2;
            break;
        case '3':
            val = 3;
            break;
        case '4':
            val = 4;
            break;
        case '5':
            val = 5;
            break;
        case '6':
            val = 6;
            break;
        case '7':
            val = 7;
            break;
        case '8':
            val = 8;
            break;
        case '9':
            val = 9;
            break;
        case 'a':
        case 'A':
            val = 10;
            break;
        case 'b':
        case 'B':
            val = 11;
            break;
        case 'c':
        case 'C':
            val = 12;
            break;
        case 'd':
        case 'D':
            val = 13;
            break;
        case 'e':
        case 'E':
            val = 14;
            break;
        case 'f':
        case 'F':
            val = 15;
            break;
        }

        decimal += val * pow(16, len);
        len--;
    }
    return decimal;
}

long long sum(char str[])
{
    long long i, s;
    s = 0;
    for(i=0; str[i] != '\0'; i++)
    {
        s *= 10;
        s += str[i] - '0';
    }
    return s;
}

int main()
{
    char ch[10000];
    long long i, N, c;
    while(gets(ch))
    {
        c = 0;
        if(ch[0] == '-')
        {
            break;
        }
        int l = strlen(ch);
        for(i=0; i<l; i++)
        {
            if(ch[i] >= '0' && ch[i] <= '9')
            {
                c++;
            }
        }
        if(c != l)
        {
            N = dec(ch);
            cout << N << endl;
        }
        else if(c == l)
        {
            N = sum(ch);
            printf("0x");
            hex(N);
            cout << endl;
        }
    }
    return 0;
}
