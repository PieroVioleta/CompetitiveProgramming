#include <bits/stdc++.h>
using namespace std;
int cont;
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	for(int i = 1; i <= n; i++){
		if(i-1 >= a and n-i <= b) cont++;
	}
	cout << cont;
	
	return 0;
}
