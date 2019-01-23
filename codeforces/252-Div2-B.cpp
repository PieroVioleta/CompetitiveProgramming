// Unsorting Array
#include <bits/stdc++.h>

using namespace std;

bool is_sort(int n, vector<int> vect);

int main() {

	int n; 
	cin >> n;
	vector<int> vect1(n);
	for(int i=0; i<n; i++){
		cin >> vect1[i];
	}
	if(count(vect1.begin(), vect1.end(), vect1[0]) == n or n==2) cout << "-1";
	else{
		if(is_sort(n, vect1)){
			for(int i = 0; i < n-1; i++){
				if(vect1[i] != vect1[i+1]){
					cout << i+1 << " " << i+2;
					break;
				}
			}
		} else{
			for(int i = 0; i < n-1; i++){
				if(vect1[i] != vect1[i+1]){
					swap(vect1[i], vect1[i+1]);
					if(is_sort(n, vect1)){
						if(i == n-2) cout << "-1";
						else{
							swap(vect1[i], vect1[i+1]);
							continue;
						}
					} else{
						swap(vect1[i], vect1[i+1]);
						cout << i+1 << " " << i+2;
						break;
					}
				}
			}
		} 
	}		
	
	return 0;
}


bool is_sort(int n, vector<int> vect){
	vector<int> temp_1(n), temp_2(n);
	for(int i=0; i<n; i++){
		temp_1[i] = vect[i];
	}
	sort(temp_1.begin(), temp_1.end());

	for(int i=0; i<n; i++){
		temp_2[i] = temp_1[n-1-i];
	}

	for(int i=0; i<n; i++){
		if(vect == temp_1 or vect == temp_2) return true;
		else return false;
	}
}
