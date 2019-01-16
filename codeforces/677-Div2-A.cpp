//Vanya and fence

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, h, cont = 0;
	scanf("%d %d", &n, &h);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i] > h) cont+=2;
		else cont+=1;
	}
	cout << cont;
	return 0;
}
