#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	char table1[102][102];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char temp;
			if((i+j) % 2 == 0) table1[i][j] = 'B';
			else table1[i][j] = 'W';
			cin >> temp;
			if(temp == '-') table1[i][j] = '-';
			cout << table1[i][j];
		}
		cout << endl;
	}
	
}
