//Bit++

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 0;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(count(s.begin(), s.end(), '-') == 2) x--;
		else x++; 
	}
	cout << x;

	return 0;

}
