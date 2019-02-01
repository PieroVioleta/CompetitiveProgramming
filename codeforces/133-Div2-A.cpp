// HQ9+
#include<bits/stdc++.h>
using namespace std;

int main(){

	bool a = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){
			a = true;
			break;
		}
	}
	if(a) cout << "YES";
	else cout << "NO";


	return 0;

}
