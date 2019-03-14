//Sale
#include<bits/stdc++.h>
using namespace std;
int sum(int i, vector <int> arr){
	int sum = 0;
	for(int j = 0; j<=i; j++) sum += arr[j];
	return sum;
}
int main(){
	#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n, m;
	cin >> n >> m;
	vector<int> prices;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		prices.push_back(temp);
	}
	sort(prices.begin(), prices.end());
	bool flag = false;
	vector <int> sumas;
	for(int i = m-1; i >= 0; i--) sumas.push_back(sum(i, prices));
	sort(sumas.begin(), sumas.end());
	if(sumas[0] <= 0) cout << -1*sumas[0];

	else cout << 0;
}
