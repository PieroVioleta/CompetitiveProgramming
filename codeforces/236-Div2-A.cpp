// Boy or Girl

#include <bits/stdc++.h>
using namespace std;

bool cont[30];

int main() {
	char s[100];
	cin >> s;
	int	tam = strlen(s) , ans;
	for(int i=0; i<tam; i++){
		cont[int(s[i]) - 97] = true;
	}
	
	for(int i=0; i<30; i++){
		if(cont[i] == true) ans++; 	
	}
	
	if(ans % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
