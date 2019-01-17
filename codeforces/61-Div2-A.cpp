// Ultra-Fast Mathematician

#include <bits/stdc++.h>

using namespace std;

int main() {

	char a1[101];
	char a2[101];

	cin >> a1;
	cin >> a2;

	for(int i=0; i<strlen(a1); i++){
		if(a1[i] != a2[i]) cout << "1";
		else cout << "0";
	}
  
	return 0;
}
