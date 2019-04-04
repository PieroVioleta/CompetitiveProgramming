#include<bits/stdc++.h>
using namespace std;
int main(){
	#endif
	int n;
	cin >> n;
	for(int i = n; i >= -n; i--){
		for(int j = -n; j <= n; j++){
			if(abs(i) + abs(j) <= n and abs(i) + j != n) cout << n - abs(i) - abs(j) << " ";
			else{ 
				if(abs(i) + j == n) cout << n - abs(i) - abs(j);	
				else{
					if(abs(i) + j <= n) cout << "  ";
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
