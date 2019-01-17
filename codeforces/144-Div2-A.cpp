#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, max, min, cmax, cmin; 
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i=0; i<n; i++){
		if(i==0) max = a[i];
		else{
			if(a[i]>=max) max = a[i];
		}
	}

	for(int i=0; i<n; i++){
		if(i==0) min = a[i];
		else{
			if(a[i] <= min) min = a[i];
		}
	}

	for(int i = 0; i < n; i++){
		if(a[i] == max){
			cmax = i;
			break;
		}
	}

	for(int i = n; i >= 0; i--){
		if(a[i] == min){
			cmin = i;
			break;
		}
	}

	if(cmax > cmin) cout << n - cmin + cmax - 2;
	else cout << n - cmin + cmax - 1;
	return 0;
}
