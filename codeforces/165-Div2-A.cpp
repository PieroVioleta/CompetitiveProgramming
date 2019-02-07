//Supercentral point

#include <bits/stdc++.h>
using namespace std;
int ans;
int main() {
	int n;
	cin >> n;
	vector <pair<int , int>> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	
	for(int i = 0; i < n; i++){
		int var = 0;
		vector <int> cont = {0, 0, 0, 0};
		
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			if(a[i].first == a[j].first){
				if(a[i].second < a[j].second) cont[0]++;
				else cont[1]++;
			}
			else{
				if(a[i].second == a[j].second){
					if(a[i].first < a[j].first) cont[2]++;
					else cont[3]++;
				}
			}
		}
		for(int i = 0; i < 4; i++){
			if(cont[i] >= 1) var++;
		}
		if(var == 4) ans++;
	}
	cout << ans;
	return 0;
}
