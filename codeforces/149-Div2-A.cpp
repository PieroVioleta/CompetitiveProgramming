// Business trip
#include<bits/stdc++.h>
using namespace std;
int main(){
	int k; 
	cin >> k;
	vector <int> meses;
	for(int i = 0; i < 12; i++){
		int temp;
		cin >> temp;
		meses.push_back(temp);
	}
	if(k == 0){
		cout << 0;
		return 0;
	}
	sort(meses.begin(), meses.end());
	int sum = 0;
	bool flag = false;
	for(int i = 11; i >= 0; i--){
		sum += meses[i];
		if(sum >= k){
			cout << 12 - i;
			flag = true;
			return 0;
		}
	}
	if(!flag) cout << -1;
	
}
