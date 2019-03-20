//Dubstep
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < int(s.size()); i++){
		if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
			i += 2;
			if (i != 0) cout << " ";
		} else{
			cout << s[i];
		}
	}
	return 0;
}
