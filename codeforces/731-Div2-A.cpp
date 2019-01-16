//Night at the museum

#include <bits/stdc++.h>
using namespace std;

int main() {
	int cont=0;
	char s[102];
	cin >> s;
	int inicio;
	if(abs('a'-s[0])<=13) inicio = abs('a'-s[0]);
	else inicio = 26-abs('a'-s[0]);
	for(int i=0; i<strlen(s)-1; i++){
		if(abs(s[i]-s[i+1])<=13) cont+=(abs(s[i]-s[i+1]));
		else cont+= 26-abs(s[i]-s[i+1]);
	}
	cout << cont+inicio;
	return 0;
}
