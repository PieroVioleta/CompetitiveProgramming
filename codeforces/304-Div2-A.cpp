#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			 int c = i*i + j*j;
			 if((int)sqrt(c) * (int)sqrt(c) == c and c <= n*n) count ++;
		}
	}
	cout << count;
	return 0;
}
