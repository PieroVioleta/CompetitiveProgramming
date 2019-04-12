// Puzzles
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> puz;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		puz.push_back(temp);
	}
	sort(puz.begin(), puz.end());
	int min = INT_MAX;
	for(int i = 0; i < m-n+1; i++){
		if(puz[i+n-1] - puz[i] <= min) min = puz[i+n-1] - puz[i];
	}
	cout << min;
	return 0;
}
