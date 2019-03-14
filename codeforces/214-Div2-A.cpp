//System of equations
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, cont = 0;
	cin >> n >> m;
	for(int a = 0; a*a <= n; a++){
		for(int b = 0; b*b <= m; b++){
			if(a*a + b == n and a + b*b == m) cont++;
		}
	}	
	cout << cont;
}
