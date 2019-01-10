// Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;

int main(){
	int m[5][5];
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j){
			scanf("%d", &m[i][j]);
			if(m[i][j]) cout << abs(2-i) + abs(2-j); 
		}
	}

	return 0;
}
