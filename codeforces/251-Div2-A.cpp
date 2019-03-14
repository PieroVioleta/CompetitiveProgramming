//Bicycle chain
#include<bits/stdc++.h>
using namespace std;
bool is_divisible(int a, int b){
	if(a % b == 0) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	vector<int> men;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		men.push_back(temp);
	}
	int m;
	scanf("%d", &m);
	vector<int> may;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		may.push_back(temp);
	}
	int greater;
	bool flag = false;
	vector <int> divisibles;
	for(int i = m-1; i >= 0; i--){
		for(int j = 0; j < n; j++){
			if(is_divisible(may[i], men[j])){
				greater = may[i]/men[j];
				divisibles.push_back(greater);
			}
		}
	}
	sort(divisibles.begin(), divisibles.end());
	reverse(divisibles.begin(), divisibles.end());
	int cont = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(is_divisible(may[j], men[i])){
				if(may[j]/men[i] == divisibles[0]) cont++;
			}
		}
	}
	cout << cont;
}
