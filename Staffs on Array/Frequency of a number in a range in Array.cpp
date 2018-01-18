/// Frequency of a number in a range in array

#include <bits/stdc++.h>
using namespace std;

int ar[1005];
long long int sum[1005][10005];

long long int CalcFrequency(int l, int r, int val){
	return sum[r][val] - sum[l-1][val];
}

int main(){
	int n, q, l, r, val;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=10000; j++){
			int ret;

			if(ar[i] == j){
				ret = 1;
			}
			else{
				ret = 0;
			}

			sum[i][j] = sum[i-1][j] + ret;
		}
	}

	while(q--){
		scanf("%d %d %d", &l, &r, &val);
		printf("%lld\n", CalcFrequency(l, r, val));
	}

	return 0;
}
