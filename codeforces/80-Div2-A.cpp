#include <bits/stdc++.h>

using namespace std;

bool isprime(int n);

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);

    for(i=n+1;i<=50;i++){
    	if(isprime(i)) break;
    }

    if(i==m) cout << "YES";
    else cout << "NO";

}


bool isprime(int n){
	int div = 0;
	if(n<2) return false;
	if(n==2) return true;
	if(n>2){
		for(int i=2; i<=n; i++){
			if(n%i == 0) div+=1;
		}
	if(div==1) return true;
	if(div>1) return false;
	}
}
