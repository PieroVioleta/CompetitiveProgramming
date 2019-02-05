// Petr and a Combination Lock

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector <int> arr(n), arr1(n);
	bool ok = false;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		arr1[i] = arr[i];
	}

	for(int mask = 0; mask < (1 << n); mask++){
		int sum = 0;

		for(int i = 0; i < n; i++){
			arr1[i] = arr[i];
		}

		for(int i = 0; i < n; i++){
			if((mask >> i) & 1) arr1[i] = arr[i] * -1;
			sum += arr1[i];
		}

		if(sum % 360 == 0){
			ok = true;
			cout << "YES";
			break;
		}
	}

	if(ok == false) cout << "NO";
}
