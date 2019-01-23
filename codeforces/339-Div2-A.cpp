//Helpful Maths
#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[100];

	cin >> s;
	
	int n = strlen(s);
	int a[n/2];

	for(int i = 0; i < n ; i+=2){
		a[i/2] = int(s[i]) - 48;
	}
	
	sort(a, a + (n+1)/2);
	
	for(int i=0; i<=n/2; i++){
		cout << a[i];
		if(i!= n/2) cout << "+";
	}
}
