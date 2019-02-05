//Efective approach

#include<bits/stdc++.h>
using namespace std;
int pos[500000];
long long ans1, ans2;

int main(){

	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int tem;
		scanf("%d", &tem);
		pos[tem] = i+1;
	}

	int m; 
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		int temp1;
		scanf("%d", &temp1);
		ans1 += pos[temp1];
		ans2 += n - pos[temp1] +1;

	}


	cout << ans1 << " " << ans2;


	return 0;

}
