/// Range Sum in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];
long long int sum[100005];

long long int PartialSum(int l, int r){
	return sum[r] - sum[l-1];
}

int main(){
	int n, q, l, r;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
		sum[i] = sum[i-1] + ar[i];
	}

	while(q--){
		scanf("%d %d", &l, &r);
		printf("%lld\n", PartialSum(l, r));
	}

	return 0;
}
