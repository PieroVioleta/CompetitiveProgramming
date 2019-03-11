// Xenia and Ringroad 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	vector <int> v;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	v.push_back(v[m-1]);
	long long cont = v[0]-1;
	for(int i = 0; i < m; i++){
		if(v[i] <= v[i+1]) cont += abs(v[i] - v[i+1]);
		else cont += n - abs(v[i] - v[i+1]);
	}
	cout << cont;
}
