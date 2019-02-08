//Parallelepiped

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int k, l, m , a, b, c;
	cin >> k >> l >> m;
	a = sqrt(k*l/m);
	b = sqrt(k*m/l);
	c = sqrt(l*m/k);
 
	cout << 4*(a+b+c);
	return 0;
}
