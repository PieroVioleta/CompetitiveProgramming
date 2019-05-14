#include<bits/stdc++.h>
using namespace std;
int mn(vector <int> plane, int n){
	sort(plane.begin(), plane.end());
	int tam = plane.size();
	int pos = 0;
	int ans = 0;
	while(n > 0){
		if(plane[pos] == 0) pos++;
		ans += plane[pos];
		plane[pos]--;
		n--;
	}
	return ans;
}
int mx(vector <int> plane, int n){
	sort(plane.begin(), plane.end());
	reverse(plane.begin(), plane.end());
	int tam = plane.size();
	int pos = 0;
	int ans = 0;
	while(n > 0){
		if(plane[pos] < plane[pos+1] && pos != tam - 1) pos++;
		ans += plane[pos];
		plane[pos]--;
		n--;
		if(plane[tam - 1] < plane[0]){
			sort(plane.begin(), plane.end());
			reverse(plane.begin(), plane.end());
			pos = 0;
		}
	}
	return ans;
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> plane;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		plane.push_back(temp);	
	}
	sort(plane.begin(),plane.end());
	cout << mx(plane,n) << " " << mn(plane, n);
	return 0;
}
