//PFAST Inc.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<string> candidates;
	for(int i = 0; i < n; i++){
		string s1;
		cin >> s1;
		candidates.push_back(s1);
	}
	vector<pair<string, string>> odiados;
	for(int i = 0; i < m; i++){
		string a, b;
		cin >> a >> b;
		pair <string, string> x = make_pair(a, b);
		odiados.push_back(x);
	}
	vector<pair<int, int>> cont_pos;
	vector<vector <string>> posib;
	int pos = 0;
	for(int mask = (1<<n) - 1; mask >= 0; mask--){
		bool flag = false;
		int cont = 0;
		vector<string> provisional;
		for(int bit = 0; bit < n; bit++){
			if((mask >> bit) & 1){
				provisional.push_back(candidates[bit]);
				cont++;
			}
		}
		for(int i = 0; i < m; i++){
			if(find(provisional.begin(), provisional.end(),odiados[i].first) != provisional.end() && find(provisional.begin(), provisional.end(),odiados[i].second) != provisional.end()){
				flag = true;
			}
		}
		if(flag) continue;
		else{
			sort(provisional.begin(), provisional.end());
			pair <int, int> w = make_pair(cont,pos);
			cont_pos.push_back(w);
			posib.push_back(provisional);
			pos++;
		}
	}
		sort(cont_pos.begin(), cont_pos.end());
		reverse(cont_pos.begin(), cont_pos.end());
		cout << cont_pos[0] . first<< endl;
		for(auto elm : posib[cont_pos[0].second]) cout << elm << endl;
    return 0;
}
