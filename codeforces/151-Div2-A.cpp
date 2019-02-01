#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, k, l, c, d, p, nl, np, ans;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int x = (l*k)/nl;
	int y = c*d;
	int z = p / np;
	
	ans = min(z, min(x,y))/n;
	cout << ans;
	return 0;

}
