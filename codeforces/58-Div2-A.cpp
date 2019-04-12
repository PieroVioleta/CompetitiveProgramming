#include<bits/stdc++.h>
using namespace std;
int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1, pos5 = -1;
int main(){
	string s;
	cin >> s;
	int tam = s.size();
	for(int i = 0; i < tam; i++){
		if(s[i] == 'h'){
			pos1 = i;
			break;
		}
	}
	for(int i = pos1+1; i < tam; i++){
		if(s[i] == 'e'){
			pos2 = i;
			break;
		}
	}
	for(int i = pos2+1; i < tam; i++){
		if(s[i] == 'l'){
			pos3 = i;
			break;
		}
	}
	for(int i = pos3+1; i < tam; i++){
		if(s[i] == 'l'){
			pos4 = i;
			break;
		}
	}
	for(int i = pos4+1; i < tam; i++){
		if(s[i] == 'o'){
			pos5 = i;
			break;
		}
	}
	if(pos1 != -1 and pos2 != -1 and pos3 != -1 and pos4 != -1 and pos5 !=-1) cout << "YES";
	else cout << "NO";
	return 0;
}
