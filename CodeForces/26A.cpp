#include <bits/stdc++.h>
using namespace std;
int p[1100002];
void siv()
{
	int N = 1100002, sq=sqrt(N), i, j;
	for(i=1; i<=100; i++)
    {
        p[i] =0;
    }
	for(i=4; i<=N; i+=2)
    {
        p[i]=1;
    }
	for(i=3; i<=sq; i+=2){
		if(p[i] == 0)
		{
			for(j=i*i; j<=N; j+=i)
            {
                 p[j]=1;
            }
		}
	}
	p[1] = 1;
	p[0] = 1;
}
int main()
{
    int n, i, ans =0, j, c;
    cin >> n;
    siv();
    for(i=1; i<=n; i++)
    {
        c = 0;
        for(j=2; j<=n; j++)
        {
            if(p[j] == 0)
            {
                if(i % j == 0)
                {
                    c++;
                }
            }
        }
        if(c == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
	return 0;
}
