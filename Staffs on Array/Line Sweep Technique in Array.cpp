/// Line Sweep Technique in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];
long long int sum[100005];

void Update(int l, int r, int val){
	sum[l] += val;
	sum[r] -= val;
}

long long int PartialSum(int l, int r){
	return sum[r] - sum[l-1];
}

int main(){
	int n, m, q, l, r, val;

	scanf("%d %d %d", &n, &m, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
	}

	while(m--){
		scanf("%d %d %d", &l, &r, &val);
		Update(l, r, val);
	}

	for(int i=1; i<=n; i++){
		sum[i] += sum[i-1];
	}

	for(int i=1; i<=n; i++){
		sum[i] += ar[i];
	}

	while(q--){
		scanf("%d %d", &l, &r);
		printf("%lld\n", PartialSum(l, r));
	}
	return 0;
}
