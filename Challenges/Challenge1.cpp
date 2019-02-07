/*
Entrada: entero n
salida: Numero de veces que sumas de cifras de n hasta obtener 9.
Ejm: 
999
3
*/
#include <bits/stdc++.h>
using namespace std;
 
int depth(string numb) {
	if (numb == "9") return 1;
	if (numb.size() == 1) return -10000;
	int sumDig = 0;
	for (char c : numb) {
		sumDig += c - '0';
	}
	return 1 + depth(to_string(sumDig));
}
 
int main() {
	string s;
	cin >> s;
	int answer = depth(s);
	if (answer < 0) cout << 0 << endl;
	else cout << answer << endl;
	return 0;
}
