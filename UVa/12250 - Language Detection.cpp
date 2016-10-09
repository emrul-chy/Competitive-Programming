#include <bits/stdc++.h>
using namespace std;
int main()
{
    char tt[200],h[]="#", eng[] = "HELLO", spn[] = "HOLA", ger[] = "HALLO", frn[] = "BONJOUR", itl[] = "CIAO", rus[] = "ZDRAVSTVUJTE";
    int t=1, e, s, hh,g, f, i, r;
    while(cin>>tt)
    {
        hh= strcmp(tt, h);
        if(hh==0) break;
        e = strcmp(tt, eng);
        if(e==0) cout<<"Case "<<t<<": ENGLISH\n";
        s = strcmp(tt, spn);
        if(s==0) cout<<"Case "<<t<<": SPANISH\n";
        g = strcmp(tt, ger);
        if(g==0) cout<<"Case "<<t<<": GERMAN\n";
        f = strcmp(tt, frn);
        if(f==0) cout<<"Case "<<t<<": FRENCH\n";
        i = strcmp(tt, itl);
        if(i==0) cout<<"Case "<<t<<": ITALIAN\n";
        r = strcmp(tt, rus);
        if(r==0) cout<<"Case "<<t<<": RUSSIAN\n";
        if(e!=0 && s!=0 && g!=0 && f!=0 && i!=0 && r!=0) cout<<"Case "<<t<<": UNKNOWN\n";
        t++;
    }
    return 0;
}
