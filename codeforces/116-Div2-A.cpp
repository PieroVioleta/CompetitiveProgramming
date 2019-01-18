#include <bits/stdc++.h>

using namespace std;

int b[1000];

int main() {

 	int n;
 	scanf("%d", &n);

 	int a[n][2];

 	for(int i=0; i < n; i++){
 		for(int j=0; j < 2; j++){
 			scanf("%d", &a[i][j]);
 		}
 	}
 	b[0] = a[0][1];
 	
 	for(int i=1; i < n-1; i++){
 		int j=0;

 		b[i] += b[i-1] - a[i][j] + a[i][j+1];

 	}

 	sort(b, b+n-1);

 	cout << b[n-2];

	return 0;
}
