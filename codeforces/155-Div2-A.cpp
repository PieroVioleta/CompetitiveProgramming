// I_love_%username%

#include <bits/stdc++.h>

using namespace std;
int cont;

int main() {

 	int n;
 	scanf("%d", &n);
 	int temp, max, min;
 	for(int i = 0; i<n; i++){
 		scanf("%d", &temp);
 		if(i == 0){
 			max = temp;
 			min = temp;
 		} else{
 			if(temp > max){
 				max = temp;
 				cont++;
 			}
 			if(temp < min){
 				min = temp;
 				cont++;
 			}
 		}
 	}

 	cout << cont;

	return 0;
}
