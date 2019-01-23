// Wonderful Randomized Sum

#include <bits/stdc++.h>
using namespace std;

int sum_sub, sum_seq, M;

int main() {
	int n; 
	scanf("%d", &n);
	
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		sum_seq += a[i];
	}
	
	for(int i=0; i<n; i++){
		sum_sub += a[i];
		if(sum_sub < 0) sum_sub = 0;
		
		M = max(M, sum_sub);
	}
	
	cout << 2*M - sum_seq;
	return 0;
}
