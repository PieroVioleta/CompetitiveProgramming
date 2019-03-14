// Counterexample 
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) { 
    if (a == 0) return b; 
    return gcd(b % a, a); 
} 
bool flag1;
int main(){
	long long l, r;
	cin >> l >> r;
	for(long long i = l; i <= r; i++){
		for(long long j = i+1; j <= r; j++){
			for(long long k = j+1; k <= r; k++){
				if(flag1) break;
				if(gcd(i,j) == 1 and gcd(j,k) == 1){
					if(gcd(i,k) != 1){
						cout << i << " " << j << " " << k;
						flag1 = true;
					}
				}
			}
		}
	}
	if(!flag1) cout << -1;
    return 0;
}
