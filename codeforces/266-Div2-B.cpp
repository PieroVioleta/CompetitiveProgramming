//Queue at the School

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, t;
	scanf("%d %d", &n, &t);
	char q[n];
	cin >> q;
	for(int j=0; j<t; ++j){
		for(int i=0; i<n-1; ++i){
			if(q[i]=='B' && q[i+1]=='G'){
				swap(q[i], q[i+1]);
				i+=1;
			}
		}
	}
	cout << q;
	return 0;
}
