/// Inserting in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];

void Insert(int pos, int val, int n){
	for(int i=n; i>pos; i--){
		ar[i] = ar[i-1];
	}

	ar[pos] = val;
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

	int n, q, pos, val;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
	}

	while(q--){
		scanf("%d %d", &pos, &val);
		if(pos + 1 > n){
			printf("Invalid Position\n");
			continue;
		}
		n++;
		Insert(pos, val, n);
		//Print(n);
	}

	return 0;
}
