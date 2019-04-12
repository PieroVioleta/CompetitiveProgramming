// DRAGONS 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> dr_bon;
	for(int i = 0; i < n; i++){
		int temp1, temp2;
		cin >> temp1 >> temp2;
		dr_bon.push_back(make_pair(temp1, temp2));
	}
	sort(dr_bon.begin(), dr_bon.end());
	bool flag = true;
	for(int i = 0; i < n; i++){
		if(s > dr_bon[i].first){
			s+= dr_bon[i].second;
		} else{
			cout << "NO";
			flag = false;
			break;
		}
	}
	if(flag) cout << "YES";
	return 0;
}
