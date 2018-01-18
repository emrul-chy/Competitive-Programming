/// Searching in array

#include <bits/stdc++.h>
using namespace std;

int ar[100005];
int mp[10000005];

bool Search(int val){
	if(mp[val] == 0){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int n, q, val;

	scanf("%d %d", &n, &q);

	for(int i=1; i<=n; i++){
		scanf("%d", &ar[i]);
		mp[ar[i]] = 1;
	}

	while(q--){
		scanf("%d", &val);
		if(Search(val)){
			printf("Found!\n");
		}
		else{
			printf("Not Found\n");
		}
	}

	return 0;
}
