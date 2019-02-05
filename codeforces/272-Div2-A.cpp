#include<bits/stdc++.h>
using namespace std;
int sum, cont;

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int temp;
		scanf("%d", &temp);
		sum += temp;
	}

	for(int i = 1; i < 6; i++){
		if((sum + i) % (n+1) != 1) cont++;
	}

	cout << cont;
	return 0;

}
