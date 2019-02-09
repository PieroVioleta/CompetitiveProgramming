//Reconnaissance 2

#include <bits/stdc++.h>
using namespace std;
vector <int> dif(105);
vector <int> dif_comp(105);
int main() {
	int n, pos;
	cin >> n;
	vector <int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		if(i == n-1){
			dif[i] += abs(arr[n-1] - arr[0]);
			dif_comp[i] += abs(arr[n-1] - arr[0]);
		}else{
			dif[i] += abs(arr[i] - arr[i+1]);
			dif_comp[i] += abs(arr[i] - arr[i+1]);
		}
	}
	
	sort(dif.begin(), dif.begin() + n);
	
	for(pos = 0; pos < n; pos++){
		if(dif[0] == dif_comp[pos]) break;
	}
	
	if(pos == n-1) cout << n << " " << 1;
	else cout << pos+1 << " " <<pos+2;
	return 0;
}
