//Pangram
#include<bits/stdc++.h>
using namespace std;
int cont[26];
int main(){
	int n, a = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		char temp;
		cin >> temp;
		if((temp >= 65 and temp <= 90) or (temp >= 97 and temp <= 122)){
			temp = toupper(temp);
			cont[temp - 65]++;
		}
	}
	for(int i = 0; i < 26; i++){
		if(cont[i] > 0) a += 1;
	}	
	if(a == 26) cout << "YES";
	else cout << "NO";
    return 0;
}
