/// Deleting in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];

void Delete(int pos, int n){
	for(int i=pos; i<=n; i++){
		ar[i] = ar[i+1];
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
	int n, q, pos;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
	}

	while(q--){
		scanf("%d", &pos);
		if(pos > n){
			printf("Invalid Position\n");
			continue;
		}

		n--;

		Delete(pos, n);
		//Print(n);
	}

	return 0;
}
