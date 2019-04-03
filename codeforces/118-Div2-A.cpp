#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int tam = s.size();
	for(int i = 0; i < tam; i++) s[i] = tolower(s[i]);
	for(int i = 0; i < tam; i++){
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y') continue;
		else{
			cout << ".";
			cout << s[i];
		}
	}
	return 0;
}
