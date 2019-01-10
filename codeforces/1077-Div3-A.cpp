//Frog jumping

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	scanf("%d", &t);
  
	for(int i = 0; i<t; ++i){
		long long int a, b, k;
		scanf("%lli %lli %lli",&a, &b, &k);
		if(k%2==0) cout << (a-b)*k/2 << endl;
		else cout << ((k+1)/2)*a - ((k-1)/2)*b << endl;
	}
  
	return 0;
}
