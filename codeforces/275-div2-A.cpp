//Lights Out

#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			arr[i][j]=1;
		}
	}
	int temp, i, j;

	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			scanf("%d", &temp);
			arr[i][j]+=temp;
			if(i>0) arr[i-1][j]+=temp;
			if(j>0) arr[i][j-1]+=temp;
			if(i<2) arr[i+1][j]+=temp;
			if(j<2) arr[i][j+1]+=temp;
		}
	}

	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			cout << (arr[i][j])%2;
		}
		cout << endl;
	}
	return 0;
}
