#include<bits/stdc++.h>
using namespace std;

map <string, int> score;

bool cmp(string a, string b){
	return score[a] > score[b];
}

int main(){
	int n;
	cin >> n;
	vector <string> s;
	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		s.push_back(temp);
		score[temp]++;
	}
	sort(s.begin(), s.end(), cmp);
	cout << s[0];
}
