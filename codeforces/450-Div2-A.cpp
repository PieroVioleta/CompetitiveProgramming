//Jzzhu and Children

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, m, ans = 0;
	scanf("%d %d", &n, &m);
	deque < pair <int, int> > arr(n);
	vector <int> copy(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i].first;
		copy[i] = arr[i].first;
		arr[i].second = arr[i].first;
	}

	while(arr.size() > 1){

		if(arr[0].first > m){
			arr[0].first -= m;
			pair <int, int> temp = arr[0];
			arr.pop_front();
			arr.push_back(temp);
		} 
		else arr.pop_front();	
	}

	for(int j = n; j > 0; j--){
		if(arr[0].second == copy[j-1]){
			ans = j;
			break;
		}
	}

	cout << ans;

	return 0;

}
