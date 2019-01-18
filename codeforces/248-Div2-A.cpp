//Cupboards

#include <bits/stdc++.h>

using namespace std;

int num0en1, num0en0, num1en0, num1en1;

int main() {

 	int n;
 	scanf("%d", &n);
 	int a[n][2];
 	for(int i = 0; i < n; i++){
 		for(int j = 0; j < 2; j++){
 			scanf("%d", &a[i][j]);
 			if(j == 0){
 				if(a[i][j]) num1en0 += 1;
 				else num0en0 +=1;
 			}
 			else{
 				if(a[i][j]) num1en1 +=1;
 				else num0en1 += 1;
 			}
 		}
 	}

 	cout << min(num0en0, num1en0) + min(num1en1, num0en1);

	return 0;
}
