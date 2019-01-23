// Number of triplets
#include <bits/stdc++.h>

using namespace std;

bool ok[2005][2005];
int column[3000], row[3000];
int main() {

	#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif	

	int n, cont=0;
	cin >> n;

	for(int i = 0; i < n; i++){
		scanf("%d %d", column+i, row+i);
		ok[column[i] += 1000][row[i] += 1000] = true;
	}	

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int mx = column[i] + column[j], my = row[i] + row[j];
			if(mx%2 == 0 && my%2 == 0 && ok[mx/2][my/2]) cont++; 
		}
	}
	
	cout << cont;
	return 0;
}
