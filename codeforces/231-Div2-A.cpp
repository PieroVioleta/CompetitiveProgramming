// Team
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, cont = 0;
	cin >> n;
	for(int  i = 0; i < n; i++){
		int num_1 = 0;
		vector <int> arr(3);
		for(int i = 0; i < 3; i++){
			cin >> arr[i];
			if(arr[i] == 1) num_1++;	
		}
		if(num_1 >= 2) cont++;

	}


	cout << cont;
	return 0;

}
