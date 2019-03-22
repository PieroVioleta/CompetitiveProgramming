#include<bits/stdc++.h>
using namespace std;
bool counter(string s, int k){
	bool flag = true;
	for(int i = 0; i < int(s.size()); i++){
		if(count(s.begin(), s.end(), s[i]) % k != 0){
			return false;
		}
	}
	return flag;
}
int main(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	string parte;
	if(counter(s,k)){
		sort(s.begin(), s.end());
		for(int i = 0; i < count(s.begin(), s.end(), s[0])/k; i++) parte.push_back(s[0]);
		for(int i = 0; i < int(s.size()) -1 ; i++){
			if(s[i] != s[i+1]){
				for(int j = 0; j < count(s.begin(), s.end(), s[i+1])/k; j++){
					parte.push_back(s[i+1]);
				}
			}
		}
		for(int i = 0; i < k; i++) cout << parte;
	} else cout << -1;
}
