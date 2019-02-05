/*
Entrada: entero n
salida: Numero de veces que sumas de cifras de n hasta obtener 9.
Ejm: 
999
3
*/
#include <bits/stdc++.h>
using namespace std;

int suma(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum += int(s[i]) - 48;
	}
	return sum;
}

int ans(string s){
	int cont = 0;
	if(suma(s) % 9 != 0 || s == "0") return 0;
	
	else{
		while(suma(s) != 9){
			s = to_string(suma(s));
			cont++;
		}		
	}
	
	return cont + 1;
}

int main() {
	string s;
	cin >> s;
	cout << ans(s);
	return 0;
	
}
