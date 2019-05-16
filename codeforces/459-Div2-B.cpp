#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n; 
	cin >> n;
	vector<long long> arr;
	for(int i = 0; i < n; i++){
		long long temp;
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	cout << arr[n-1] - arr[0] << " ";
	long long ans = 0;
	long long c1 = 0, c2 = 0;
	if(arr[n-1] != arr[0]){
		for(int i = 0; i < n; i++){
			if(arr[i] == arr[0]) c1++;
			if(arr[i] == arr[n-1]) c2++;
		}
		ans = c1*c2;
	}
	else  ans = n*(n-1) / 2;
	cout << ans;
	return 0;
}
