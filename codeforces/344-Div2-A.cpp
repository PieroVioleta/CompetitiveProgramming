// Magnets
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, cont=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1; i++){
		if(a[i]!=a[i+1]){
			cont++;
		}
	}
	cout << cont+1;
	return 0;
}
