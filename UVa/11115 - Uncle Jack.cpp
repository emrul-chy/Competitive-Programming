#include <bits/stdc++.h>
using namespace std;

void rev(char str[])
{
    int i,l;
    char t;
    l = strlen(str) - 1;
    for(i=0; i<l; i++ )
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
        l--;
    }
}

void strmul(char s2[50], char s1[50], char a[50])
{
    char z[50];
    int i, k, y,l, ll, j, c, s=0, p=0, len;
    len = strlen(s2);
    l = strlen(s1);
    ll = strlen(s2);
    rev(s1), rev(s2);
    if(ll > l)
    {
        swap(s1, s2);
        swap(l, ll);
    }
    j=0;
    for(i=0; i<ll; i++)
    {
        c = 0;
        for(j=0; j<l; j++)
        {
            s = (s1[j]-'0') * (s2[i] - '0') + c;
            c = s / 10;
            z[j] = (s % 10) + '0';
        }
        if(c > 0)
        {
            z[j++] = c % 10 + '0';
        }
        int k;
        z[j] = '\0';
        rev(z);
        for(k=j; k<j+i; k++)
        {
            z[k] = '0';
        }
        z[k] = '\0';
        rev(z);
        if(i == 0)
        {
            strcpy(a, z);
        }
        if(i != 0)
        {
            c = 0;
            int p=strlen(a), q = strlen(z);
            for(j=p; j<q; j++)
            {
                a[j] = '0';
            }
            for(j=0; j<q; j++)
            {
                s = (a[j]-'0') + (z[j] - '0') + c;
                c = s / 10;
                a[j] = (s % 10) + '0';
            }
            if(c > 0)
            {
                a[j++] = c % 10 + '0';
            }
            a[j] = '\0';
        }

    }
    rev(s1);
    rev(s2);
    rev(a);
}

struct solve
{
    char p[30][30];
};

int main()
{
    solve a[15];
    char s1[50], s2[50], c[50], s[50];
    int n, t, i, j;
    for(i=1; i<=10; i++)
    {
        stringstream x;
        x << i;
        string st;
        st = x.str();
        strcpy(s1, st.c_str());
        c[0]= '\0', s[0]= '\0';
        strcpy(a[i].p[0], "1");
        strcpy(a[i].p[1], st.c_str());
        for(j=1; j<=26; j++)
        {
            if(j!=1)
            {
                strcpy(s2, c);
            }
            else
            {
                strcpy(s2, s1);
            }
            strmul(s1, s2, s);
            strcpy(c, s);
            strcpy(a[i].p[j+1], c);
            s[0] = '\0';
        }
    }
    while(cin >> n >> t)
    {
        if(!n && !t)
            break;
        cout << a[n].p[t] << endl;
    }
    return 0;
}
