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
vector <string> ss;
int main()
{
    char s2[100000], s1[100000], rr[100000], a[100000];
    int i, k,ii, y,l, ll,n, j, c, s;
    ss.push_back("1");
    for(ii=1; ii<=370; ii++)
    {
        int ch=0, kl;
        sprintf(s1, "%d", ii);
        if(ii==1) strcpy(s2, s1);
        else strcpy(s2, a);
        kl = strlen(s2);
        for(i=0; i < kl; i++)
        {
            if(s2[i] == '0')
            {
                ch ++;
            }
        }
        if(ch == kl)
        {
            cout << "0\n";
            continue;
        }
        l = strlen(s1);
        ll = strlen(s2);
        rev(s1), rev(s2);
        if(ll > l || (ll == l && s1[0] < s2[0]))
        {
            strcpy(rr, s1);
            strcpy(a, s2);
            strcpy(s1, a);
            strcpy(s2, rr);
            rr[0] = '\0', a[0] = '\0';
        }
        l = strlen(s1);
        ll = strlen(s2);
        j=0;
        for(i=0; i<ll; i++)
        {
            c = 0;

            for(j=0; j<l; j++)
            {
                s = (s1[j]-'0') * (s2[i] - '0');
                s += c;
                c = s / 10;
                rr[j] = (s % 10) + '0';
            }

            if(c > 0)
            {
                rr[j++] = c % 10 + '0';
            }

            int k;
            rr[j] = '\0';
            rev(rr);

            for(k=j; k<j+i; k++)
            {
                rr[k] = '0';
            }

            rr[k] = '\0';
            rev(rr);
            if(i == 0)
            {
                strcpy(a, rr);
            }

            if(i != 0)
            {
                c = 0;
                int w1=strlen(a), w2 = strlen(rr);
                for(j=w1; j<w2; j++)
                {
                    a[j] = '0';
                }

                for(j=0; j<w2; j++)
                {
                    s = (a[j]-'0') + (rr[j] - '0');
                    s += c;
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
        rev(a);
        string eee(a);
        ss.push_back(eee);
    }
    while(cin >> n)
    {
        if(n == 0) break;
        int c[100]={0};
        for(i=0; i < ss[n].size(); i++)
        {
            c[ss[n][i]-'0']++;
        }
        cout << n << "! --"<< endl;
        for(i=0; i<=9; i++)
        {
            if(i == 0 || i == 5)
            {
                printf("   ");
            }
            else
            {
                printf("    ");
            }
            printf("(%d)%5d",i,c[i]);
            if(i == 4)
            {
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
