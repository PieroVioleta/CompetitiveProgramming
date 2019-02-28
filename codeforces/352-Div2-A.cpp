//Jeff and Digits
#include<bits/stdc++.h>
using namespace std;
int cont, aux;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(temp == 5) cont++;
		if(temp == 0) aux++;
	}
	int cant = (cont/9)*9;
	if(cant == 0){
		if(aux > 0) cout << 0;
		return 0;
	}
	if(aux){
		for(int i = 0; i < cant; i++){
			cout << 5;
		}
		for(int i = 0; i < aux; i++) cout << 0;
	} else cout << -1;
	return 0;
}
