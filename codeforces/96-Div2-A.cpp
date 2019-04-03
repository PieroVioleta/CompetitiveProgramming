#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	bool flag = false;
	if((int) s.size() < 7){
		cout << "NO";
		return 0;
	}
	for(int i = 0; i  <= (int) s.size() - 7; i++){
		if(s[i] == '0' and s[i+1] == '0' and s[i+2] == '0' and s[i+3] == '0'
		and s[i+4] == '0' and s[i+5] == '0' and s[i+6] == '0'){
			flag = true;
			break;
		}
		if(s[i] == '1' and s[i+1] == '1' and s[i+2] == '1' and s[i+3] == '1'
		and s[i+4] == '1' and s[i+5] == '1' and s[i+6] == '1'){
			flag = true;
			break;
		}
	}
	if(flag) cout << "YES";
	else cout << "NO";
	return 0;
}
