//Preparing Olympiad
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, l, r, x, cont = 0;
	scanf("%d %d %d %d", &n, &l, &r, &x);
	int c[n];
   	for(int i = 0; i < n; i++) cin >> c[i];
   	for(int mask = 0; mask < (1<<n); mask++){
   		vector <int> c_mask;
   		int sum = 0;
   		for(int bit = 0; bit < n; bit++){
   			if((mask>>bit) & 1){
   				sum += c[bit];
   				c_mask.push_back(c[bit]);
   			}
   		}
   		sort(c_mask.begin(), c_mask.end());
   		if(sum >= l and sum <= r){
   			if(*max_element(c_mask.begin(), c_mask.end()) - c_mask[0] >= x){
   				cont++;
   			}
   		}
   	}
   	cout << cont;
    return 0;
}
