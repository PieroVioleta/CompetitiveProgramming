//Young Physicist

#include<bits/stdc++.h>
using namespace std;

int arr[3];


int main(){

	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		arr[0] += a;
		arr[1] += b;
		arr[2] += c;
	}

	if(arr[0]==0 && arr[1]==0 && arr[2]==0) cout << "YES";
	else cout << "NO";

	return 0;
}
