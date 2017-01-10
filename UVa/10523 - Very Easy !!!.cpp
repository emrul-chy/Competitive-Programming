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

void strmal(char s2[1000], char s1[1000], char a[1000])
{
    char rr[1000];
    int i, k, y,l, ll, j, c, s=0, ch=0, kl;
    kl = strlen(s2);
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
            if(s > 9)
            {
                c = s / 10;
                rr[j] = (s % 10) + '0';
            }
            else if(s < 10)
            {
                rr[j] = s + '0';
                c = 0;
            }

        }

        while(c > 0)
        {
            rr[j] = c % 10 + '0';
            c /= 10;
            j++;
            if(c == 0)
            {
                break;
            }
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
                if(s > 9)
                {
                    c = s / 10;
                    a[j] = (s % 10) + '0';
                }
                else if(s < 10)
                {
                    a[j] = s + '0';
                    c = 0;
                }
            }
            while(c > 0)
            {
                a[j] = c % 10 + '0';
                c /= 10;
                j++;
                if(c == 0)
                {
                    break;
                }
            }
            a[j] = '\0';
        }

    }
    rev(s1),rev(s2);
    rev(a);
}

struct stm
{

    char ch[155][300];
};

int main()
{
    stm ar[35];
    char aa[1234], bb[1234], ccc[1234], kkk[1234];
    int n, t, i, j;
    for(i=1; i<=30; i++)
    {
        stringstream a1, b1;
        a1 << i;
        string aw;
        aw= a1.str();
        strcpy(aa, aw.c_str());
        ccc[0]='\0', kkk[0]='\0';
        for(j=1; j<151; j++)
        {
            if(j!=1)strcpy(bb, ccc);
            else strcpy(bb, aa);
            strmal(aa, bb, kkk);
            strcpy(ccc, kkk);
          //  cout << ccc << endl;
            strcpy(ar[i].ch[j], ccc);
            kkk[0] ='\0';
        }
    }
    string ans;
    while(scanf("%d %d", &n, &t)==2)
    {
        char a[1234],f[1234],k[1234], d[1234],b[1234], c[1234];
        string s;
        ans = "";
        stringstream ss;
        ss << t;
        s = ss.str();
        c[0] = '\0';
        ss.clear();
        strcpy(a, s.c_str());
        for(i=1; i<=n; i++)
        {
            k[0]='\0';
            c[0]='\0';
            if(i==1)
            {
                strcpy(d, a);
                string hh(d);
                ans = hh;
            }
            else
            {
                strcpy(c, ar[t].ch[i-1]);
            }
            if(i==1)continue;
            if(i!=1)
            {
                strcpy(f, c);
                d[0] = '\0';
                stringstream sss;
                sss << i;
                s = "";
                s = sss.str();
                strcpy(b, s.c_str());
                strmal(f, b, d);
            }
            string kk(d);
            string em = "";
            if(kk.size()>ans.size())
            {
                string yy = ans;
                ans = kk;
                kk = yy;
            }
            reverse(kk.begin(), kk.end());
            reverse(ans.begin(), ans.end());
            for(j=kk.size(); j<ans.size(); j++)
            {
                kk += "0";
            }
            int sum=0, cc=0;
            for(j=0; j<ans.size(); j++)
            {
                sum = kk[j]-'0'+ans[j]-'0';
                sum += cc;
                cc = sum / 10;
                sum = sum % 10;
                em += (char)(sum+48);
            }
            if(cc>0)em += (char)(cc+48);
            reverse(em.begin(), em.end());
            ans = em;
        }
        cout << ans  << endl;
    }
    return 0;
}
