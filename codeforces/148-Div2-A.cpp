#include <bits/stdc++.h>

using namespace std;

int cont;

int main() {

 	int k, l, m, n, d;
 	cin >> k >> l >> m >> n >> d;
  
 	for(int i=1; i<=d; i++){
 		if( i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0) cont++;
 	}
  
 	cout << cont;
	return 0;
}
