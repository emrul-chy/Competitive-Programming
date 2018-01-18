/// Shifting in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];
int br[100005];

void Shift(int k, int n){

	int cur = n-k+1;

	for(int j=1; j<=k; j++, cur++){
	 	br[j] = ar[cur];
	}

	for(int i=n; i>k; i--){
		ar[i] = ar[i-k];
	}

	for(int i=1; i<=k; i++){
		ar[i] = br[i];
	}
}

void Print(int n)
{
	for(int i=1; i<=n; i++){
		printf("%d", ar[i]);
		if(i==n){
			printf("\n");
		} else{
			printf(" ");
		}
	}
}

int main(){
	int n, q, k;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
	}

	while(q--){
		scanf("%d", &k);
		k %= n;
		Shift(k, n);
		//Print(n);
	}

	return 0;
}
